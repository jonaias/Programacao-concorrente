#include <omp.h>
#include <QApplication>
#include <QtGui>
#include <QtCore>

#define IMAGENS_WIDTH 350
#define HISTOGRAMA_WIDTH 400

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

                    //horizontalLayout->addWidget(graphicsView);

                    graphicsView_2 = new QGraphicsView(centralwidget);
                    graphicsView_2->setObjectName(QString::fromUtf8("graphicsView_2"));

                    //horizontalLayout->addWidget(graphicsView_2);


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
                    horizontalSlider->setMaximum(256);
                    horizontalSlider->setPageStep(1);
                    horizontalSlider->setOrientation(Qt::Horizontal);
                    horizontalSlider->setTickPosition(QSlider::TicksBelow);
                    horizontalSlider->setTickInterval(1);

                    verticalLayout_4->addWidget(horizontalSlider);


                    //horizontalLayout_3->addWidget(groupBox_2);
                    horizontalLayout->addWidget(graphicsView);
                    horizontalLayout->addWidget(groupBox_2);
                    horizontalLayout->addWidget(graphicsView_2);

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
                    loadButton->setText(QApplication::translate("MainWindow", "Load image", 0, QApplication::UnicodeUTF8));
                    calculateButton->setText(QApplication::translate("MainWindow", "Calculate original image histogram", 0, QApplication::UnicodeUTF8));
                    groupBox->setTitle(QApplication::translate("MainWindow", "Make adjusts", 0, QApplication::UnicodeUTF8));
                    adjustButton->setText(QApplication::translate("MainWindow", "Adjust", 0, QApplication::UnicodeUTF8));
                    radioButton_2->setText(QApplication::translate("MainWindow", "R", 0, QApplication::UnicodeUTF8));
                    radioButton->setText(QApplication::translate("MainWindow", "G", 0, QApplication::UnicodeUTF8));
                    radioButton_3->setText(QApplication::translate("MainWindow", "B", 0, QApplication::UnicodeUTF8));
                    radioButton_4->setText(QApplication::translate("MainWindow", "brit", 0, QApplication::UnicodeUTF8));
                    groupBox_2->setTitle(QApplication::translate("MainWindow", "Global threads number:", 0, QApplication::UnicodeUTF8));
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

                    QObject::connect(horizontalSlider, SIGNAL(valueChanged(int)), label, SLOT(setNum(int)));
                    QObject::connect(horizontalSlider, SIGNAL(valueChanged(int)), this, SLOT(SetNumThreads(int)));
                    QObject::connect(loadButton, SIGNAL(clicked()), this, SLOT(LoadImage()));
                    QObject::connect(calculateButton, SIGNAL(clicked()), this, SLOT(GenerateHistogram()));
                    QObject::connect(adjustButton, SIGNAL(clicked()), this, SLOT(AdjustImage()));

                    QMetaObject::connectSlotsByName(this);

                    SetNumThreads(1);

	}

        void ClearHistograms(int histogram[4][256]){
            memset(histogram,0,4*256*sizeof(int));
        }
	

        float CalculateHistogram(){
            QElapsedTimer time_measurer;

            ClearHistograms(histogram_matrix);

            time_measurer.start();
            #pragma omp parallel for
            for (int i=0; i<imagem_ini.width(); i++)
              for (int j=0; j<imagem_ini.height(); j++)
              {
                histogram_matrix[0][qRed(imagem_ini.pixel(i,j))]++;
                histogram_matrix[1][qGreen(imagem_ini.pixel(i,j))]++;
                histogram_matrix[2][qBlue(imagem_ini.pixel(i,j))]++;
                histogram_matrix[3][(qRed(imagem_ini.pixel(i,j))+qGreen(imagem_ini.pixel(i,j))+qBlue(imagem_ini.pixel(i,j)))/3]++;
              }

            return time_measurer.elapsed()/1000.0;
        }

        void DisplayHistogram(int histograma[4][256]){
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
                     out4 << i << " " << histograma[3][i] << endl;
                 }
                 input1.close();
                 input2.close();
                 input3.close();
                 input4.close();
                 QProcess gnuplot;
                 gnuplot.execute("gnuplot",QStringList() << "script.gnuplot");
                  QImage vermelho("vermelho.png");
                  QImage verde("verde.png");
                  QImage azul("azul.png");
                  QImage brilho("brilho.png");
                  QGraphicsPixmapItem* hvm = histograma_vermelho->addPixmap(QPixmap::fromImage(vermelho).scaledToWidth(HISTOGRAMA_WIDTH));
                  hvm->setPos(qrand()*HISTOGRAMA_WIDTH/RAND_MAX,qrand()*HISTOGRAMA_WIDTH/RAND_MAX);
                  QGraphicsPixmapItem* hvd = histograma_verde->addPixmap(QPixmap::fromImage(verde).scaledToWidth(HISTOGRAMA_WIDTH));
                  hvd->setPos(qrand()*HISTOGRAMA_WIDTH/RAND_MAX,qrand()*HISTOGRAMA_WIDTH/RAND_MAX);
                  QGraphicsPixmapItem* ha = histograma_azul->addPixmap(QPixmap::fromImage(azul).scaledToWidth(HISTOGRAMA_WIDTH));
                  ha->setPos(qrand()*HISTOGRAMA_WIDTH/RAND_MAX,qrand()*HISTOGRAMA_WIDTH/RAND_MAX);
                  QGraphicsPixmapItem* hb = histograma_brilho->addPixmap(QPixmap::fromImage(brilho).scaledToWidth(HISTOGRAMA_WIDTH));
                  hb->setPos(qrand()*HISTOGRAMA_WIDTH/RAND_MAX,qrand()*HISTOGRAMA_WIDTH/RAND_MAX);

             }
             else{
                 QMessageBox msgBox;
                 msgBox.setText("Cannot open files to write");
                 msgBox.exec();
             }
        }

protected slots:
        void SetNumThreads(int num_threads){
            omp_set_num_threads(num_threads);
        }
  
	void LoadImage()
	{
		filename = QFileDialog::getOpenFileName(0, "Open Image", "", "All files (*.*)");
                imagem_ini = QImage(filename);
		
                if (!imagem_ini.isNull()) {
                    QGraphicsPixmapItem* pi = imagem_inicial->addPixmap(QPixmap::fromImage(imagem_ini).scaledToWidth(IMAGENS_WIDTH));
                    pi->setPos(qrand()*IMAGENS_WIDTH/RAND_MAX,qrand()*IMAGENS_WIDTH/RAND_MAX);
                    loadButton->setEnabled(false);
                    calculateButton->setEnabled(true);
                }
                else{
                    QMessageBox msgBox;
                    msgBox.setText("Wrong image format.");
                    msgBox.exec();
                }
	}
	
        void GenerateHistogram(){
                float time_elapsed;
                QString buffer;

                calculateButton->setEnabled(false);

                buffer = calculateButton->text();
                calculateButton->setText("Calculating histogram...");

                statusbar->showMessage("Calculating histogram with "+ QString().setNum(omp_get_max_threads()) +" processors.");

                time_elapsed = CalculateHistogram();

                statusbar->showMessage("Time to calculate histogram with "+ QString().setNum(omp_get_max_threads()) +" processors was " + QString().setNum(time_elapsed,'f',3) + "s");

                DisplayHistogram(histogram_matrix);

                calculateButton->setText(buffer);
                calculateButton->setEnabled(true);
                adjustButton->setEnabled(true);
        }


	void AdjustImage()
	{
                //TODO: Diretiva do openMP para tornar paralelo e calcular tempo DAQUI ( ate o proximo ATE AQUI )
                #pragma omp parallel for
                for (int i=0; i<imagem_ini.width(); i++)
                  for (int j=0; j<imagem_ini.height(); j++)
                    imagem_ini.setPixel(i,j, ~(imagem_ini.pixel(QPoint(i,j))));
                //ATE AQUI. mostrar com uma QMessageBox o tempo
		  
                QGraphicsPixmapItem* pi = imagem_final->addPixmap(QPixmap::fromImage(imagem_ini).scaledToWidth(IMAGENS_WIDTH));
                pi->setPos(qrand()*IMAGENS_WIDTH/RAND_MAX,qrand()*IMAGENS_WIDTH/RAND_MAX);

                calculateButton->setText("Calcular histograma da nova imagem");
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


       int histogram_matrix[4][256];

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
