#include <QApplication>
#include <QtGui>
#include <QtCore>

class MainForm : public QWidget
{
	Q_OBJECT
	
public:
  
	MainForm()
	{
		scene = new QGraphicsScene();
		view = new QGraphicsView(scene);
		QHBoxLayout* hl = new QHBoxLayout();
		QPushButton* loadimg_pb = new QPushButton("Load Image");
		connect(loadimg_pb,SIGNAL(clicked()),this,SLOT(LoadImage()));
		QPushButton* transf_btn = new QPushButton("Adjust Image");
		connect(transf_btn, SIGNAL(clicked()), this, SLOT(AdjustImage()));
		hl->addWidget(loadimg_pb,0);
		hl->addWidget(transf_btn,0);
		hl->addStretch(2);
		QVBoxLayout* vl = new QVBoxLayout();
		vl->addWidget(view);
		vl->addLayout(hl);
		setLayout(vl);
	}
	
protected slots:
  
	void LoadImage()
	{
		filename = QFileDialog::getOpenFileName(0, "Open Image", "", "All files (*.*)");
		img = QImage(filename);
		
		if (!img.isNull()) {
			QGraphicsPixmapItem* pi = scene->addPixmap(QPixmap::fromImage(img).scaledToWidth(500));
			pi->setFlag(QGraphicsItem::ItemIsMovable,true);
			pi->setFlag(QGraphicsItem::ItemIsSelectable,true);
			pi->setPos(qrand()*500/RAND_MAX,qrand()*500/RAND_MAX);
		}
	}
	
	void AdjustImage()
	{
		for (int i=0; i<img.width(); i++)
		  for (int j=0; j<img.height(); j++)
                    img.setPixel(i,j, ~(img.pixel(QPoint(i,j))));
		  
		QGraphicsPixmapItem* pi = scene->addPixmap(QPixmap::fromImage(img).scaledToWidth(500));
		pi->setFlag(QGraphicsItem::ItemIsMovable,true);
		pi->setFlag(QGraphicsItem::ItemIsSelectable,true);
		pi->setPos(qrand()*500/RAND_MAX,qrand()*500/RAND_MAX);
	}
	
private:
  
	QGraphicsScene* scene;
	QGraphicsView* view;
	QString filename;
	QImage img;
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
