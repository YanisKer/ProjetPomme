#include <QApplication>
#include <QMainWindow>
#include "pageaccueil.h"

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    PageAccueil window;
    window.setWindowState(Qt::WindowFullScreen);
    window.show();

    return app.exec();
}
