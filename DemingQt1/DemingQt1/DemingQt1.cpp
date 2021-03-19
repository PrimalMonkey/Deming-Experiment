#include <QPainter>
#include<QtMath>
#include "DemingQt1.h"

DemingQt1::DemingQt1(QWidget* parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);

    connect(ui.rule1, &QPushButton::clicked, this, [=]
    {
        pixmap = QPixmap(720, 480);
        QPainter qp(&pixmap);
        drawLines(&qp);
        ui.label->setPixmap(pixmap);
    });

    connect(ui.rule2, &QPushButton::clicked, this, [=]
        {
            pixmap = QPixmap(720, 480);
            QPainter qp2(&pixmap);
            drawLines2(&qp2);
            ui.label->setPixmap(pixmap);
        });

    connect(ui.rule3, &QPushButton::clicked, this, [=]
        {
            pixmap = QPixmap(720, 480);
            QPainter qp3(&pixmap);
            drawLines3(&qp3);
            ui.label->setPixmap(pixmap);
        });

    connect(ui.rule4, &QPushButton::clicked, this, [=]
        {
            pixmap = QPixmap(720, 480);
            QPainter qp4(&pixmap);
            drawLines3(&qp4);
            ui.label->setPixmap(pixmap);
        });
}

void DemingQt1::paintEvent(QPaintEvent* e) {

    Q_UNUSED(e);
    
}

void DemingQt1::drawLines(QPainter* qp) {

    QPen pen(Qt::black, 2, Qt::SolidLine);
    qp->setPen(pen);
    qp->drawLine(50, 250, 650, 250);
    qp->setPen(pen);
    qp->drawLine(350, 455, 350, 25);
    QPen pen1(Qt::red, 2, Qt::SolidLine);
    qp->setPen(pen1);

    // Правило 1

    const int R_MIN_X = 300;
    const int R_MAX_X = 400;
    const int R_MIN_Y = 200;
    const int R_MAX_Y = 300;
    QList<QPoint> points;
    srand(time(NULL));
    for (int i = 0; i < 100; i++)
    {
        int x = qrand() % (R_MAX_X - R_MIN_X + 1) + R_MIN_X;
        int y = qrand() % (R_MAX_Y - R_MIN_Y + 1) + R_MIN_Y;
        points << QPoint(x, y);
        qp->drawPoint(x, y);
    }
}

    // Правило 2

void DemingQt1::drawLines2(QPainter* qp2) {

    QPen pen(Qt::black, 2, Qt::SolidLine);
    qp2->setPen(pen);
    qp2->drawLine(50, 250, 650, 250);
    qp2->setPen(pen);
    qp2->drawLine(350, 455, 350, 25);
    QPen pen1(Qt::red, 2, Qt::SolidLine);
    qp2->setPen(pen1);

    int R_MIN_X = 300;
    int R_MAX_X = 400;
    int R_MIN_Y = 200;
    int R_MAX_Y = 300;
    QList<QPoint> points;
    srand(time(NULL));
    for (int i = 0; i < 100; i++)
    {
        int x = qrand() % (R_MAX_X - R_MIN_X + 1) + R_MIN_X;
        int y = qrand() % (R_MAX_Y - R_MIN_Y + 1) + R_MIN_Y;

        if (x < 350)
        {
            R_MAX_X += 350 - x;
            R_MIN_X += 350 - x;
        }

        else
        {
            R_MAX_X -= x - 350;
            R_MIN_X -= x - 350;
        }

        if (y < 250)
        {
            R_MAX_Y += 250 - y;
            R_MIN_Y += 250 - y;
        }

        else
        {
            R_MAX_Y -= y - 250;
            R_MIN_Y -= y - 250;
        }

        points << QPoint(x, y);
        qp2->drawPoint(x, y);
    }
}

    // Правило 3

    void DemingQt1::drawLines3(QPainter * qp3) {

        QPen pen(Qt::black, 2, Qt::SolidLine);
        qp3->setPen(pen);
        qp3->drawLine(50, 250, 650, 250);
        qp3->setPen(pen);
        qp3->drawLine(350, 455, 350, 25);
        QPen pen1(Qt::red, 2, Qt::SolidLine);
        qp3->setPen(pen1);

        int R_MIN_X = 300;
        int R_MAX_X = 400;
        int R_MIN_Y = 200;
        int R_MAX_Y = 300;
        QList<QPoint> points;
        srand(time(NULL));
        for (int i = 0; i < 20; i++)
        {
            int deltaX;
            int deltaY;

            int x = qrand() % (R_MAX_X - R_MIN_X + 1) + R_MIN_X;
            int y = qrand() % (R_MAX_Y - R_MIN_Y + 1) + R_MIN_Y;

            if (x < 350)
            {
                R_MAX_X = 400 + (350 - x);
                R_MIN_X = 300 + (350 - x);
            }

            else
            {
                R_MAX_X = 400 - (x - 350);
                R_MIN_X = 300 - (x - 350);
            }

            if (y < 250)
            {
                R_MAX_Y = 300 + (250 - y);
                R_MIN_Y = 200 + (250 - y);
            }

            else
            {
                R_MAX_Y = 300 - (y - 250);
                R_MIN_Y = 200 - (y - 250);
            }

            points << QPoint(x, y);
            qp3->drawPoint(x, y);
        }
    }

    // Правило 4

    void DemingQt1::drawLines4(QPainter* qp4) {

        QPen pen(Qt::black, 2, Qt::SolidLine);
        qp4->setPen(pen);
        qp4->drawLine(50, 250, 650, 250);
        qp4->setPen(pen);
        qp4->drawLine(350, 455, 350, 25);
        QPen pen1(Qt::red, 2, Qt::SolidLine);
        qp4->setPen(pen1);

        int R_MIN_X = 300;
        int R_MAX_X = 400;
        int R_MIN_Y = 200;
        int R_MAX_Y = 300;
        QList<QPoint> points;
        srand(time(NULL));
        for (int i = 0; i < 100; i++)
        {
            int x = qrand() % (R_MAX_X - R_MIN_X + 1) + R_MIN_X;
            int y = qrand() % (R_MAX_Y - R_MIN_Y + 1) + R_MIN_Y;

            R_MIN_X = x - 50;
            R_MAX_X = x + 50;
            R_MIN_Y = y - 50;
            R_MAX_Y = y + 50;

            points << QPoint(x, y);
            qp4->drawPoint(x, y);
        }
    }






    