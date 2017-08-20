#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "qextserialenumerator.h"
#include <QDebug>  //permite imprimir en consola
#include <QMessageBox> // muestra mensajes de error
#include <QTime>
#include <QFile>
#include <QProcess>
#include <QString>

MainWindow::MainWindow(QWidget *parent) : //constructor
    QMainWindow(parent),
    ui(new Ui::MainWindow), m_port(NULL),m_cant_bytes_enviados(0),m_cant_bytes_recibidos(0) //
{
   ui->setupUi(this);
   ui->tabWidget->setCurrentIndex(0);

}

MainWindow::~MainWindow()
{
    delete ui;
    delete m_port; // libero memoria dinamica
    m_port=NULL;
}




void MainWindow::onDatosRecibidos()
{
    QByteArray bytes;
    int cant=m_port->bytesAvailable();
    //if(bytes.isNull())return;
    bytes.resize(cant);
    m_port->read(bytes.data(),bytes.size());//cant de datos a leer
    m_cant_bytes_recibidos+=cant;
    //ui->textEdit->insertPlainText(bytes);
    ui->lineEdit_Recibidos->setText(QString::number(m_cant_bytes_recibidos));
    ui->lineEdit_receive_data->insertPlainText(bytes);
    ui->lineEdit_receive_data->ensureCursorVisible();

    if(stat==1){
        QTextStream stream( &file );
        stream<<bytes;
    }

    qDebug()<<"dDebug:"<<bytes;
}





void MainWindow::on_pushButton_Conectar_clicked()
{
       if (!m_port)
       {
           QString sPort;

           m_port= new QextSerialPort(sPort, QextSerialPort::EventDriven);

           m_port->setBaudRate(BAUD115200);
           m_port->setFlowControl(FLOW_OFF);
           m_port->setParity(PAR_NONE);
           m_port->setDataBits(DATA_8);
           m_port->setStopBits(STOP_1);

            #ifdef Q_OS_LINUX
             m_port->setPortName("/dev/ttyUSB0");
             #endif

             #ifdef Q_OS_MACOS
             m_port->setPortName("/dev/cu.SLAB_USBtoUART");
            #endif

           if(m_port->open(QIODevice::ReadWrite)==true)
           {
                qDebug()<<"Puerto Abierto";
                connect(m_port, SIGNAL(readyRead()),this,SLOT (onDatosRecibidos()));
                ui->tabWidget->setCurrentIndex(1);
           }
           else
           {
               qDebug()<<"Error de apertura";
               delete m_port;
               m_port=NULL;
           }
       }
       else
       {
           qDebug()<<"Cerramos Puerto";
           delete m_port;
           m_port=NULL;
       }
       if (m_port && m_port->isOpen())
            ui->pushButton_Conectar->setText("Disconnect");
       else
           ui->pushButton_Conectar->setText("Connect");

}


void MainWindow::on_pushButton_Enviar_clicked()
{
    if (m_port==NULL || !m_port->isOpen())
    {
            QMessageBox::critical(this,"Error de conexion", "Seleccione un puerto valido");
            return;
    }

    if (!ui->lineEdit_Dato->text().isEmpty())
    {
            //QByteArray send=ui->lineEdit_Dato->text().toLatin1();
        QByteArray send=ui->lineEdit_Dato->text().toLocal8Bit();

            m_port->write(send + "\r\n");
    }

}



void MainWindow::delay()
{
    QTime dieTime= QTime::currentTime().addSecs(1);
    while (QTime::currentTime() < dieTime)
    QCoreApplication::processEvents(QEventLoop::AllEvents, 100);
}



void MainWindow::send_at_cmd(QString cmd)
{
  qDebug()<<"CMD:"<<cmd;
}




void MainWindow::on_pushButton_reset_clicked()
{
    qDebug()<<"exec Button Reset";
    ui->pushButton_reset->setText("OK");

    m_port->write("AT+RST\r\n");
    delay();delay();
    ui->pushButton_reset->setText("RESET");
}

void MainWindow::on_pushButton_esp_connect_clicked()
{
    m_port->write("AT+CWMODE=1\r\n");
    delay();
    //m_port->write("AT+CWJAP=\"mobile\",\"0102030405\"\r\n");
        m_port->write("AT+CWJAP=\"tplink\",\"19781986\"\r\n");
    delay();   delay(); delay();   delay();
    m_port->write("AT+CIFSR\r\n");
}



void MainWindow::on_pushButton_wifi_clicked()
{
    m_port->write("AT+CWMODE=1\r\n");
    qDebug()<<"AT+CWMODE=1\r\n";
    delay();
    m_port->write("AT+CWLAP\r\n");
    qDebug()<<"AT+CWLAP\r\n";
}

void MainWindow::on_pushButton_default_clicked()
{
    char cmd[64];


    QString input = "AT+RESTORE\r\n";

    this->m_port->write(input.toLocal8Bit());


    //this->m_port->write(cmd);
    qDebug()<<"AT+RESTORE";
}



void MainWindow::on_pushButton_log_clicked()
{
    static char dateTime[30];
    static int *year=new int ;
    static int *mon=new int ;
    static int *day=new int ;
    static int *hour=new int ;
    static int *min=new int ;
    static int *sec=new int ;
    static int *mide=new int ;
    QDateTime UTC(QDateTime::currentDateTimeUtc());
    QDateTime local(UTC.toLocalTime());
    char txt[45];
    time_t  time=UTC.toTime_t();
    time=time-10800;
    *year=(UTC.toTime_t()/31556926);
    *sec=time%60;
    *min=(time/60)%60;
    *hour=(time/3600)%24;
    *day=(time/(3600*24))%31;
    *mon=(((time-(time/31556926)))/2629743%12)+1;
    sprintf(txt,"log%d%02d%02d%02d%02d%02d.txt",(*year+1970),*mon,*day,*hour,*min,*sec);
    //sprintf(dateTime,"%2d/%2d/%4d",*day,*mon,(*year+1970));
    qDebug()<<txt;
    QString filename=txt;
    file.setFileName(txt);

  static bool  checked;
    if(checked==0){
        qDebug()<<"start"<<checked;
        ui->pushButton_log->setText("STOP LOG");
          checked=1;

          if ( file.open(QIODevice::ReadWrite) )
          {
              stat=1;
           //   QTextStream stream( &file );
          //       stream<<"something"<<endl;
          }

    }
    else{
        qDebug()<<"stop"<<checked;
        ui->pushButton_log->setText("START LOG");
        checked=0;
        file.close();
        stat=0;
    }
}



void MainWindow::on_pushButton_closed_clicked()
{
delete m_port;
m_port=NULL;
this->close();
}

void MainWindow::updateTime(char * txt)
{
static char dateTime[30];
static int *year=new int ;
static int *mon=new int ;
static int *day=new int ;
static int *hour=new int ;
static int *min=new int ;
static int *sec=new int ;
static int *mide=new int ;
QDateTime UTC(QDateTime::currentDateTimeUtc());
QDateTime local(UTC.toLocalTime());

time_t  time=UTC.toTime_t();
time=time-10800;
*year=(UTC.toTime_t()/31556926);

    *sec=time%60;

    *min=(time/60)%60;

    *hour=(time/3600)%24;

    *day=(time/(3600*24))%31;

    *mon=(((time-(time/31556926)))/2629743%12)+1;

    sprintf(txt,"log%d%02d%02d%02d%02d%02d.txt",(*year+1970),*mon,*day,*hour,*min,*sec);

    sprintf(dateTime,"%2d/%2d/%4d",*day,*mon,(*year+1970));

    qDebug()<<txt;
}

void MainWindow::on_pushButton_clicked()
{
    ui->lineEdit_receive_data->clear();
}


void MainWindow::on_pushButton_web_clicked()
{
    m_port->write("AT+CIPMUX=1\r\n");
    delay();

    //  m_port->write("AT+CIPSTART=0,\"TCP\",\"www.google.com\",80\r\n");
    m_port->write("AT+CIPSTART=0,\"TCP\",\"api.openweathermap.org\",80\r\n");

    //m_port->write("AT+CIPSTART=0,\"TCP\",\"pool.ntp.org\",80\r\n");
    //m_port->write("AT+CIPSTART=0,\"TCP\",\"checkip.dyndns.org\",80\r\n");
    //delay();
}


void MainWindow::on_pushButton_content_clicked()
{

    int q;
//char content[]={"GET /data/2.5/weather?id=2925533 HTTP/1.0\r\nHost: api.openweathermap.org\r\n\r\n"} ;
//char content[]={"GET / HTTP/1.1\r\nHOST: pool.ntp.org\r\n"};
//char content[]={"GET / HTTP/1.1\r\nHOST: checkip.dyndns.org\r\n\r\n"};
//char content[]={"GET /data/2.5/weather?q=San%20Francisco,us HTTP/1.0\r\nHost: api.openweathermap.org\r\n\r\n\r\n"};
//char content[]={"GET / HTTP/1.1\r\nHost: www.google.com\r\n\r\n"};

    char content[]={"GET /data/2.5/weather?id=2925533 HTTP/1.0\r\nHost: api.openweathermap.org\r\n\r\n"};

    char str[10];
    q=strlen(content);
    qDebug()<<"size contents"<<q;

    m_port->write("AT+CIPSEND=0,");
    delay();
    sprintf(str,"%d",q);
    m_port->write(str);
    m_port->write("\r\n");
    delay();
    m_port->write(content);
    //m_port->write("\r\n");
}

void MainWindow::on_pushButton_ip_clicked()
{
    m_port->write("AT+CIFSR\r\n");
    delay();
}
