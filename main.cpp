#include <QApplication>
#include <QMainWindow>
#include "ComSerie.h"
#include "pagemodeetpompe.h"

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    ComSerie::getInstance();
    PageModeEtPompe window;
    window.setWindowState(Qt::WindowFullScreen);
    window.show();

    return app.exec();
}
