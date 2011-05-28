#include <QApplication>
#include <QtGui>
#include <QtCore>

class MainForm : public QMainWindow
{
	Q_OBJECT
	
public:
  
	MainForm()
	{
            if (this->objectName().isEmpty())
                        this->setObjectName(QString::fromUtf8("MainWindow"));
                    this->setWindowModality(Qt::NonModal);
                    this->resize(688, 549);
                    actionQuit = new QAction(this);
                    actionQuit->setObjectName(QString::fromUtf8("actionQuit"));
                    centralwidget = new QWidget(this);
                    centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
                    verticalLayout = new QVBoxLayout(centralwidget);
                    verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
                    horizontalLayout = new QHBoxLayout();
                    horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
                    graphicsView = new QGraphicsView(centralwidget);
                    graphicsView->setObjectName(QString::fromUtf8("graphicsView"));

                    horizontalLayout->addWidget(graphicsView);

                    graphicsView_2 = new QGraphicsView(centralwidget);
                    graphicsView_2->setObjectName(QString::fromUtf8("graphicsView_2"));

                    horizontalLayout->addWidget(graphicsView_2);


                    verticalLayout->addLayout(horizontalLayout);

                    horizontalLayout_2 = new QHBoxLayout();
                    horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
                    loadButton = new QPushButton(centralwidget);
                    loadButton->setObjectName(QString::fromUtf8("loadButton"));

                    horizontalLayout_2->addWidget(loadButton);

                    horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

                    horizontalLayout_2->addItem(horizontalSpacer);

                    calculateButton = new QPushButton(centralwidget);
                    calculateButton->setObjectName(QString::fromUtf8("calculateButton"));
                    calculateButton->setEnabled(false);

                    horizontalLayout_2->addWidget(calculateButton);

                    horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

                    horizontalLayout_2->addItem(horizontalSpacer_2);

                    groupBox = new QGroupBox(centralwidget);
                    groupBox->setObjectName(QString::fromUtf8("groupBox"));
                    horizontalLayout_4 = new QHBoxLayout(groupBox);
                    horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
                    adjustButton = new QPushButton(groupBox);
                    adjustButton->setObjectName(QString::fromUtf8("adjustButton"));
                    adjustButton->setEnabled(false);

                    horizontalLayout_4->addWidget(adjustButton);

                    verticalLayout_2 = new QVBoxLayout();
                    verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
                    radioButton_2 = new QRadioButton(groupBox);
                    radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));
                    radioButton_2->setChecked(true);

                    verticalLayout_2->addWidget(radioButton_2);

                    radioButton = new QRadioButton(groupBox);
                    radioButton->setObjectName(QString::fromUtf8("radioButton"));

                    verticalLayout_2->addWidget(radioButton);

                    radioButton_3 = new QRadioButton(groupBox);
                    radioButton_3->setObjectName(QString::fromUtf8("radioButton_3"));

                    verticalLayout_2->addWidget(radioButton_3);

                    radioButton_4 = new QRadioButton(groupBox);
                    radioButton_4->setObjectName(QString::fromUtf8("radioButton_4"));

                    verticalLayout_2->addWidget(radioButton_4);


                    horizontalLayout_4->addLayout(verticalLayout_2);


                    horizontalLayout_2->addWidget(groupBox);


                    verticalLayout->addLayout(horizontalLayout_2);

                    horizontalLayout_3 = new QHBoxLayout();
                    horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
                    groupBox_2 = new QGroupBox(centralwidget);
                    groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
                    verticalLayout_4 = new QVBoxLayout(groupBox_2);
                    verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
                    label = new QLabel(groupBox_2);
                    label->setObjectName(QString::fromUtf8("label"));
                    QFont font;
                    font.setPointSize(45);
                    font.setBold(true);
                    font.setWeight(75);
                    label->setFont(font);
                    label->setLayoutDirection(Qt::LeftToRight);
                    label->setAutoFillBackground(false);
                    label->setAlignment(Qt::AlignCenter);

                    verticalLayout_4->addWidget(label);

                    horizontalSlider = new QSlider(groupBox_2);
                    horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
                    horizontalSlider->setAutoFillBackground(true);
                    horizontalSlider->setMinimum(1);
                    horizontalSlider->setMaximum(8);
                    horizontalSlider->setPageStep(1);
                    horizontalSlider->setOrientation(Qt::Horizontal);
                    horizontalSlider->setTickPosition(QSlider::TicksBelow);
                    horizontalSlider->setTickInterval(1);

                    verticalLayout_4->addWidget(horizontalSlider);


                    horizontalLayout_3->addWidget(groupBox_2);

                    graphicsView_6 = new QGraphicsView(centralwidget);
                    graphicsView_6->setObjectName(QString::fromUtf8("graphicsView_6"));

                    horizontalLayout_3->addWidget(graphicsView_6);

                    graphicsView_5 = new QGraphicsView(centralwidget);
                    graphicsView_5->setObjectName(QString::fromUtf8("graphicsView_5"));

                    horizontalLayout_3->addWidget(graphicsView_5);

                    graphicsView_4 = new QGraphicsView(centralwidget);
                    graphicsView_4->setObjectName(QString::fromUtf8("graphicsView_4"));

                    horizontalLayout_3->addWidget(graphicsView_4);

                    graphicsView_3 = new QGraphicsView(centralwidget);
                    graphicsView_3->setObjectName(QString::fromUtf8("graphicsView_3"));

                    horizontalLayout_3->addWidget(graphicsView_3);


                    verticalLayout->addLayout(horizontalLayout_3);

                    this-> setCentralWidget(centralwidget);
                    menubar = new QMenuBar(this);
                    menubar->setObjectName(QString::fromUtf8("menubar"));
                    menubar->setGeometry(QRect(0, 0, 688, 25));
                    this->setMenuBar(menubar);
                    statusbar = new QStatusBar(this);
                    statusbar->setObjectName(QString::fromUtf8("statusbar"));
                    this->setStatusBar(statusbar);
                    this->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
                    actionQuit->setText(QApplication::translate("MainWindow", "&Quit", 0, QApplication::UnicodeUTF8));
                    loadButton->setText(QApplication::translate("MainWindow", "Carregar imagem", 0, QApplication::UnicodeUTF8));
                    calculateButton->setText(QApplication::translate("MainWindow", "Calcular histograma", 0, QApplication::UnicodeUTF8));
                    groupBox->setTitle(QApplication::translate("MainWindow", "Realizar ajustes", 0, QApplication::UnicodeUTF8));
                    adjustButton->setText(QApplication::translate("MainWindow", "Ajustar", 0, QApplication::UnicodeUTF8));
                    radioButton_2->setText(QApplication::translate("MainWindow", "R", 0, QApplication::UnicodeUTF8));
                    radioButton->setText(QApplication::translate("MainWindow", "G", 0, QApplication::UnicodeUTF8));
                    radioButton_3->setText(QApplication::translate("MainWindow", "B", 0, QApplication::UnicodeUTF8));
                    radioButton_4->setText(QApplication::translate("MainWindow", "Brilho", 0, QApplication::UnicodeUTF8));
                    groupBox_2->setTitle(QApplication::translate("MainWindow", "Numero de Threads  Global:", 0, QApplication::UnicodeUTF8));
                    label->setText(QApplication::translate("MainWindow", "1", 0, QApplication::UnicodeUTF8));

                    imagem_inicial = new QGraphicsScene();
                    imagem_final = new QGraphicsScene();
                    histograma_vermelho = new QGraphicsScene();
                    histograma_verde = new QGraphicsScene();
                    histograma_azul = new QGraphicsScene();
                    histograma_brilho = new QGraphicsScene();



                    graphicsView->setScene(imagem_inicial);
                    graphicsView_2->setScene(imagem_final);
                    graphicsView_3->setScene(histograma_vermelho);
                    graphicsView_4->setScene(histograma_verde);
                    graphicsView_5->setScene(histograma_azul);
                    graphicsView_6->setScene(histograma_brilho);

                    QObject::connect(horizontalSlider, SIGNAL(sliderMoved(int)), label, SLOT(setNum(int)));
                    QObject::connect(loadButton, SIGNAL(clicked()), this, SLOT(LoadImage()));
                    QObject::connect(calculateButton, SIGNAL(clicked()), this, SLOT(CalcularHistograma()));

                    QMetaObject::connectSlotsByName(this);

                    for (int i=0; i<4; i++)
                        for(int j=0;j<256;j++)
                    {
                        histograma_inicial[i][j]=0;
                        histograma_final[i][j]=0;
                    }

	}
	
protected slots:
  
	void LoadImage()
	{
		filename = QFileDialog::getOpenFileName(0, "Open Image", "", "All files (*.*)");
                imagem_ini = QImage(filename);
		
                if (!imagem_ini.isNull()) {
                    QGraphicsPixmapItem* pi = imagem_inicial->addPixmap(QPixmap::fromImage(imagem_ini).scaledToWidth(500));
                    pi->setPos(qrand()*500/RAND_MAX,qrand()*500/RAND_MAX);
                    loadButton->setEnabled(false);
                    calculateButton->setEnabled(true);
                }
                else{
                    QMessageBox msgBox;
                    msgBox.setText("Imagem invalida");
                    msgBox.exec();
                }
	}

        void ImprimirHistograma(int histograma[4][256]){
            QFile input1("input1");
            QFile input2("input2");
            QFile input3("input3");
            QFile input4("input4");
             if (input1.open(QFile::WriteOnly | QFile::Truncate) |
                 input2.open(QFile::WriteOnly | QFile::Truncate) |
                 input3.open(QFile::WriteOnly | QFile::Truncate) |
                 input4.open(QFile::WriteOnly | QFile::Truncate) ) {
                 QTextStream out1(&input1);
                 QTextStream out2(&input2);
                 QTextStream out3(&input3);
                 QTextStream out4(&input4);
                 for (int i=0; i<256; i++){
                     out1 << i << " " << histograma[0][i] << endl;
                     out2 << i << " " << histograma[1][i] << endl;
                     out3 << i << " " << histograma[2][i] << endl;
                 }
                 QProcess gnuplot;
                 printf("Codigo de erro %d ",gnuplot.execute("gnuplot",QStringList() << "script.gnuplot"));

             }
             else{
                 QMessageBox msgBox;
                 msgBox.setText("Nao foi possivel abrir arquivos para leitura");
                 msgBox.exec();
             }
        }
	
        void CalcularHistograma(){
            if(!adjustButton->isEnabled()){
                calculateButton->setEnabled(false);
                calculateButton->setText("Calculando histograma..");
                for (int i=0; i<imagem_ini.width(); i++)
                  for (int j=0; j<imagem_ini.height(); j++)
                  {
                    histograma_inicial[0][qRed(imagem_ini.pixel(i,j))]++;
                    histograma_inicial[1][qGreen(imagem_ini.pixel(i,j))]++;
                    histograma_inicial[2][qBlue(imagem_ini.pixel(i,j))]++;
                  }
                ImprimirHistograma(histograma_inicial);
                calculateButton->setEnabled(true);
                calculateButton->setText("Calcular histograma");
            }
            else
            {
                for (int i=0; i<imagem_ini.width(); i++)
                  for (int j=0; j<imagem_ini.height(); j++)
                  {
                      histograma_final[0][qRed(imagem_ini.pixel(i,j))]++;
                      histograma_final[1][qGreen(imagem_ini.pixel(i,j))]++;
                      histograma_final[2][qBlue(imagem_ini.pixel(i,j))]++;
                  }

            }

        }

	void AdjustImage()
	{
                for (int i=0; i<imagem_ini.width(); i++)
                  for (int j=0; j<imagem_ini.height(); j++)
                    imagem_ini.setPixel(i,j, ~(imagem_ini.pixel(QPoint(i,j))));
		  
                QGraphicsPixmapItem* pi = imagem_inicial->addPixmap(QPixmap::fromImage(imagem_ini).scaledToWidth(500));
		pi->setPos(qrand()*500/RAND_MAX,qrand()*500/RAND_MAX);
	}
	
private:
  
       QAction *actionQuit;
       QWidget *centralwidget;
       QVBoxLayout *verticalLayout;
       QHBoxLayout *horizontalLayout;
       QGraphicsView *graphicsView;
       QGraphicsView *graphicsView_2;
       QHBoxLayout *horizontalLayout_2;
       QPushButton *loadButton;
       QSpacerItem *horizontalSpacer;
       QPushButton *calculateButton;
       QSpacerItem *horizontalSpacer_2;
       QGroupBox *groupBox;
       QHBoxLayout *horizontalLayout_4;
       QPushButton *adjustButton;
       QVBoxLayout *verticalLayout_2;
       QRadioButton *radioButton_2;
       QRadioButton *radioButton;
       QRadioButton *radioButton_3;
       QRadioButton *radioButton_4;
       QHBoxLayout *horizontalLayout_3;
       QGroupBox *groupBox_2;
       QVBoxLayout *verticalLayout_4;
       QLabel *label;
       QSlider *horizontalSlider;
       QGraphicsView *graphicsView_6;
       QGraphicsView *graphicsView_5;
       QGraphicsView *graphicsView_4;
       QGraphicsView *graphicsView_3;
       QMenuBar *menubar;
       QStatusBar *statusbar;

       QString filename;
       QImage imagem_ini;
       QGraphicsScene *imagem_inicial;
       QGraphicsScene *imagem_final;
       QGraphicsScene *histograma_vermelho;
       QGraphicsScene *histograma_verde;
       QGraphicsScene *histograma_azul;
       QGraphicsScene *histograma_brilho;

       int histograma_inicial[4][256];
       int histograma_final[4][256];

};

int main(int argc, char *argv[])
{
	QApplication app(argc, argv);
	app.connect(&app, SIGNAL(lastWindowClosed()), &app, SLOT(quit()));
	
	MainForm form;
	form.setGeometry(100,100,1000,680);
	form.show();
	
	return app.exec();
}

#include "main.moc"
