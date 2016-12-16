#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

   /* QPixmap pix("C:/VLN/GUITest/pic");
    ui ->label_pic->setPixmap(pix);
    */
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_Image_btn_clicked()
{
    QString filename = QFileDialog::getOpenFileName(this, tr("Choose"), "", tr("Images (*.png *.jpg *.jpeg *.bmp *.gif"));

    if(QString::compare(filename, QString()) != 0)
    {
        QImage image;
        bool valid = image.load(filename);

        if (valid)
        {
            image = image.scaledToWidth(ui->bl_image->width(), Qt::SmoothTransformation);
            ui->bl_image->setPixmap(QPixmap::fromImage(image));
        }

        else
        {
            //error handling
        }
    }
}
