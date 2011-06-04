#include <omp.h>
#include <QApplication>
#include <QtGui>
#include <QtCore>
#include "filters.h"

#define IMAGES_WIDTH 300
#define HISTOGRAM_WIDTH 350

class MainForm : public QMainWindow
{
	Q_OBJECT
	
public:
  
        /* Generates main screen. */
	MainForm()
	{
            if (this->objectName().isEmpty())
                        this->setObjectName(QString::fromUtf8("MainWindow"));
                    this->setWindowModality(Qt::NonModal);
                    this->resize(688, 549);
                    centralwidget = new QWidget(this);
                    centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
                    verticalLayout = new QVBoxLayout(centralwidget);
                    verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
                    horizontalLayout = new QHBoxLayout();
                    horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
                    graphicsView = new QGraphicsView(centralwidget);
                    graphicsView->setObjectName(QString::fromUtf8("graphicsView"));

                    horizontalLayout->addWidget(graphicsView);

                    groupBox_2 = new QGroupBox(centralwidget);
                    groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
                    horizontalLayout->addWidget(groupBox_2);


                    graphicsView_2 = new QGraphicsView(centralwidget);
                    graphicsView_2->setObjectName(QString::fromUtf8("graphicsView_2"));

                    horizontalLayout->addWidget(graphicsView_2);


                    verticalLayout->addLayout(horizontalLayout);

                    horizontalLayout_2 = new QHBoxLayout();
                    horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));

                    benchmarkButton = new QPushButton(centralwidget);
                    benchmarkButton->setObjectName(QString::fromUtf8("benchmarkButton"));
                    horizontalLayout_2->addWidget(benchmarkButton);

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
                    radioButton_4->setEnabled(false);

                    verticalLayout_2->addWidget(radioButton_4);

                    radioButton_5 = new QRadioButton(groupBox);
                    radioButton_5->setObjectName(QString::fromUtf8("radioButton_5"));
                    radioButton_5->setEnabled(false);
                    radioButton_5->setChecked(true);

                    verticalLayout_2->addWidget(radioButton_5);

                    horizontalLayout_4->addLayout(verticalLayout_2);


                    horizontalLayout_2->addWidget(groupBox);


                    verticalLayout->addLayout(horizontalLayout_2);

                    horizontalLayout_3 = new QHBoxLayout();
                    horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));

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

                    statusbar = new QStatusBar(this);
                    statusbar->setObjectName(QString::fromUtf8("statusbar"));
                    this->setStatusBar(statusbar);
                    this->setWindowTitle(QApplication::translate("MainWindow", "Image adjuster", 0, QApplication::UnicodeUTF8));
                    loadButton->setText(QApplication::translate("MainWindow", "Load image", 0, QApplication::UnicodeUTF8));
                    benchmarkButton->setText(QApplication::translate("MainWindow", "Generate speedup graph", 0, QApplication::UnicodeUTF8));
                    calculateButton->setText(QApplication::translate("MainWindow", "Calculate original image histogram", 0, QApplication::UnicodeUTF8));
                    groupBox->setTitle(QApplication::translate("MainWindow", "Make adjusts", 0, QApplication::UnicodeUTF8));
                    adjustButton->setText(QApplication::translate("MainWindow", "Adjust", 0, QApplication::UnicodeUTF8));
                    radioButton_2->setText(QApplication::translate("MainWindow", "R", 0, QApplication::UnicodeUTF8));
                    radioButton->setText(QApplication::translate("MainWindow", "G", 0, QApplication::UnicodeUTF8));
                    radioButton_3->setText(QApplication::translate("MainWindow", "B", 0, QApplication::UnicodeUTF8));
                    radioButton_4->setText(QApplication::translate("MainWindow", "Contraste", 0, QApplication::UnicodeUTF8));
                    radioButton_5->setText(QApplication::translate("MainWindow", "Brilho", 0, QApplication::UnicodeUTF8));
                    groupBox_2->setTitle(QApplication::translate("MainWindow", "Global threads number:", 0, QApplication::UnicodeUTF8));
                    label->setText(QApplication::translate("MainWindow", "1", 0, QApplication::UnicodeUTF8));

                    imagem_inicial = new QGraphicsScene();
                    imagem_final = new QGraphicsScene();
                    red_histogram = new QGraphicsScene();
                    green_histogram = new QGraphicsScene();
                    blue_histogram = new QGraphicsScene();
                    bright_histogram = new QGraphicsScene();



                    graphicsView->setScene(imagem_inicial);
                    graphicsView_2->setScene(imagem_final);
                    graphicsView_3->setScene(red_histogram);
                    graphicsView_4->setScene(green_histogram);
                    graphicsView_5->setScene(blue_histogram);
                    graphicsView_6->setScene(bright_histogram);

                    QObject::connect(horizontalSlider, SIGNAL(valueChanged(int)), label, SLOT(setNum(int)));
                    QObject::connect(horizontalSlider, SIGNAL(valueChanged(int)), this, SLOT(SetNumThreads(int)));
                    QObject::connect(benchmarkButton, SIGNAL(clicked()), this, SLOT(GenerateSpeedup()));
                    QObject::connect(loadButton, SIGNAL(clicked()), this, SLOT(LoadImage()));
                    QObject::connect(calculateButton, SIGNAL(clicked()), this, SLOT(GenerateHistogram()));
                    QObject::connect(adjustButton, SIGNAL(clicked()), this, SLOT(GenerateImage()));
                    QObject::connect(radioButton_2, SIGNAL(clicked()), this, SLOT(correctRed()));
                    QObject::connect(radioButton, SIGNAL(clicked()), this, SLOT(correctGreen()));
                    QObject::connect(radioButton_3, SIGNAL(clicked()), this, SLOT(correctBlue()));
                    QObject::connect(radioButton_4, SIGNAL(clicked()), this, SLOT(correctContrast()));
                    QObject::connect(radioButton_5, SIGNAL(clicked()), this, SLOT(increaseBrightness()));

                    QMetaObject::connectSlotsByName(this);

                    SetNumThreads(1);

                    /*Default option*/
                    increaseBrightness();

	}

        /* Clears all histograms. */
        void ClearHistograms(int histogram[4][256]){
            memset(histogram,0,4*256*sizeof(int));
        }

        /* Clears all transformations. */
        void ClearTransforms(int transform[3][256]){
            memset(transform,0,3*256*sizeof(int));
        }
	

        /* Calculates, in parallel, the histogram for the image. */
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

        /* Calculates the adjustments that are to be applied. */
        float CalculateAdjust(){
            QElapsedTimer time_measurer;

            time_measurer.start();

            #pragma omp parallel for
            for (int i=0; i<imagem_ini.width(); i++)
              for (int j=0; j<imagem_ini.height(); j++)
                  imagem_ini.setPixel(i,j, qRgb(transformMatrix[0][qRed(imagem_ini.pixel(i,j))], transformMatrix[1][qGreen((imagem_ini.pixel(i,j)))], transformMatrix[2][qBlue(imagem_ini.pixel(i, j))]));

            return time_measurer.elapsed()/1000.0;
        }

        /* Displays the histograms on the bottom of the window. */
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
                  QGraphicsPixmapItem* hvm = red_histogram->addPixmap(QPixmap::fromImage(vermelho).scaledToWidth(HISTOGRAM_WIDTH));
                  hvm->setPos(qrand()*HISTOGRAM_WIDTH/RAND_MAX,qrand()*HISTOGRAM_WIDTH/RAND_MAX);
                  QGraphicsPixmapItem* hvd = green_histogram->addPixmap(QPixmap::fromImage(verde).scaledToWidth(HISTOGRAM_WIDTH));
                  hvd->setPos(qrand()*HISTOGRAM_WIDTH/RAND_MAX,qrand()*HISTOGRAM_WIDTH/RAND_MAX);
                  QGraphicsPixmapItem* ha = blue_histogram->addPixmap(QPixmap::fromImage(azul).scaledToWidth(HISTOGRAM_WIDTH));
                  ha->setPos(qrand()*HISTOGRAM_WIDTH/RAND_MAX,qrand()*HISTOGRAM_WIDTH/RAND_MAX);
                  QGraphicsPixmapItem* hb = bright_histogram->addPixmap(QPixmap::fromImage(brilho).scaledToWidth(HISTOGRAM_WIDTH));
                  hb->setPos(qrand()*HISTOGRAM_WIDTH/RAND_MAX,qrand()*HISTOGRAM_WIDTH/RAND_MAX);

             }
             else{
                 QMessageBox msgBox;
                 msgBox.setText("Cannot open files to write");
                 msgBox.exec();
             }
        }

protected slots:

        /* Generates speedup graphs. */
        void GenerateSpeedup(){

            loadButton->click();

            QFile input1("histogramspeedup");
            QFile input2("adjustspeedup");
             if (input1.open(QFile::WriteOnly | QFile::Truncate) |
                 input2.open(QFile::WriteOnly | QFile::Truncate)) {
                 QTextStream out1(&input1);
                 QTextStream out2(&input2);

                 float one_core_histogram_time=0,x_core_histogram_time=0;

                 /* Generates speedup histogram*/
                 out1<<"#Num_core\tideal_speedup\tarchieved_speedup\ttime(s)" << endl;
                 for(int i=1;i<=8;i++){
                     omp_set_num_threads(i);
                     if(i==1){
                        out1 << "1" <<"\t1"<<"\t1"<<"\t" << (one_core_histogram_time=CalculateHistogram()) << endl;
                     }
                     else{
                        x_core_histogram_time = CalculateHistogram();
                        out1 << i << "\t"<< i << "\t"<< (one_core_histogram_time/x_core_histogram_time) << "\t" << x_core_histogram_time << endl;
                     }
                     out1.flush();
                 }

                 for(int i=16;i<=256;i*=2){
                     omp_set_num_threads(i);
                     x_core_histogram_time = CalculateHistogram();
                     out1 << i << "\t"<< i << "\t"<< (one_core_histogram_time/x_core_histogram_time) << "\t" << x_core_histogram_time << endl;
                     out1.flush();
                 }


                 /* Generates adjust speedup */
                 out2<<"#Num_core\tideal_speedup\tarchieved_speedup\ttime(s)" << endl;
                 for(int i=1;i<=8;i++){
                     omp_set_num_threads(i);
                     if(i==1){
                        out2 << "1" <<"\t1"<<"\t1"<<"\t" << (one_core_histogram_time=CalculateAdjust()) << endl;
                     }
                     else{
                        x_core_histogram_time = CalculateAdjust();
                        out2 << i << "\t"<< i << "\t"<< (one_core_histogram_time/x_core_histogram_time) << "\t" << x_core_histogram_time << endl;
                     }
                     out2.flush();
                 }

                 for(int i=16;i<=256;i*=2){
                     omp_set_num_threads(i);
                     x_core_histogram_time = CalculateAdjust();
                     out2 << i << "\t"<< i << "\t"<< (one_core_histogram_time/x_core_histogram_time) << "\t" << x_core_histogram_time << endl;
                     out2.flush();
                 }

                 input1.close();
                 input2.close();
                 QProcess gnuplot;
                 gnuplot.execute("gnuplot",QStringList() << "histogramspeedup.gnuplot");
                 gnuplot.execute("gnuplot",QStringList() << "histogramspeedup2graphs.gnuplot");
                 gnuplot.execute("gnuplot",QStringList() << "adjustspeedup.gnuplot");
                 gnuplot.execute("gnuplot",QStringList() << "adjustspeedup2graphs.gnuplot");

                 calculateButton->setEnabled(false);

             }
             else{
                 QMessageBox msgBox;
                 msgBox.setText("Cannot open files to write speedup data");
                 msgBox.exec();
             }
        }

        /* Image adjustments. */

        void correctRed(){
            int i;
            colorCorrection(histogram_matrix[0], transformMatrix[0]);
            for (i = 0; i < 256; i++) {
                transformMatrix[1][i] = i;
                transformMatrix[2][i] = i;
            }

        }

        void correctGreen(){
            int i;
            colorCorrection(histogram_matrix[1], transformMatrix[1]);
            for (i = 0; i < 256; i++) {
                transformMatrix[0][i] = i;
                transformMatrix[2][i] = i;
            }
        }

        void correctBlue(){
            int i;
            colorCorrection(histogram_matrix[2], transformMatrix[2]);
            for (i = 0; i < 256; i++) {
                transformMatrix[1][i] = i;
                transformMatrix[0][i] = i;
            }
        }

        void correctContrast(){
            equalization(histogram_matrix[0], transformMatrix[0], imagem_ini.width(),imagem_ini.height());
            equalization(histogram_matrix[1], transformMatrix[1], imagem_ini.width(),imagem_ini.height());
            equalization(histogram_matrix[2], transformMatrix[2], imagem_ini.width(),imagem_ini.height());
        }

	void increaseBrightness(){
            brightness(transformMatrix[0], 40);
            brightness(transformMatrix[1], 40);
            brightness(transformMatrix[2], 40);
        }

        void SetNumThreads(int num_threads){
            omp_set_num_threads(num_threads);
        }
  
        /* Loads an image from a file specified by the user. */
	void LoadImage()
	{
		filename = QFileDialog::getOpenFileName(0, "Open Image", "", "All files (*.*)");
                imagem_ini = QImage(filename);
		
                if (!imagem_ini.isNull()) {
                    QGraphicsPixmapItem* pi = imagem_inicial->addPixmap(QPixmap::fromImage(imagem_ini).scaledToWidth(IMAGES_WIDTH));
                    pi->setPos(qrand()*IMAGES_WIDTH/RAND_MAX,qrand()*IMAGES_WIDTH/RAND_MAX);
                    loadButton->setEnabled(false);
                    loadButton->setText("Image loaded");
                    calculateButton->setEnabled(true);
                }
                else{
                    QMessageBox msgBox;
                    msgBox.setText("Wrong image format.");
                    msgBox.exec();
                }
	}
	
        /* Generates histograms to be displayed at the bottom of the window. */
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
                radioButton_4->setEnabled(true);
                radioButton_5->setEnabled(true);
                calculateButton->setEnabled(true);
                adjustButton->setEnabled(true);
        }


        /* Displays the adjusted image on the right side of the window. */
        void GenerateImage()
	{
            float time_elapsed;
            QString buffer;

            adjustButton->setEnabled(false);

            buffer = adjustButton->text();
            adjustButton->setText("Calculating image...");

            statusbar->showMessage("Calculating image with "+ QString().setNum(omp_get_max_threads()) +" processors.");

            time_elapsed = CalculateAdjust();

            QGraphicsPixmapItem* pi = imagem_final->addPixmap(QPixmap::fromImage(imagem_ini).scaledToWidth(IMAGES_WIDTH));
            pi->setPos(qrand()*IMAGES_WIDTH/RAND_MAX,qrand()*IMAGES_WIDTH/RAND_MAX);

            statusbar->showMessage("Time to calculate histogram with "+ QString().setNum(omp_get_max_threads()) +" processors was " + QString().setNum(time_elapsed,'f',3) + "s");

            DisplayHistogram(histogram_matrix);

            adjustButton->setText(buffer);
            adjustButton->setEnabled(true);

            calculateButton->setText("Calcule new image histogram");

        }
	
private:

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
       QPushButton *benchmarkButton;
       QVBoxLayout *verticalLayout_2;
       QRadioButton *radioButton_2;
       QRadioButton *radioButton;
       QRadioButton *radioButton_3;
       QRadioButton *radioButton_4;
       QRadioButton *radioButton_5;
       QHBoxLayout *horizontalLayout_3;
       QGroupBox *groupBox_2;
       QVBoxLayout *verticalLayout_4;
       QLabel *label;
       QSlider *horizontalSlider;
       QGraphicsView *graphicsView_6;
       QGraphicsView *graphicsView_5;
       QGraphicsView *graphicsView_4;
       QGraphicsView *graphicsView_3;
       QStatusBar *statusbar;

       QString filename;
       QImage imagem_ini;
       QGraphicsScene *imagem_inicial;
       QGraphicsScene *imagem_final;
       QGraphicsScene *red_histogram;
       QGraphicsScene *green_histogram;
       QGraphicsScene *blue_histogram;
       QGraphicsScene *bright_histogram;


       int histogram_matrix[4][256];
       int transformMatrix[3][256];

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
