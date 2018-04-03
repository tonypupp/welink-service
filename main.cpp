#include <QCoreApplication>
#include <QTimer>

#include <Vecreen/vlocalservice.h>
#include "handler.h"
#include "wlengine.h"

Wlengine *WE;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Wlengine wlengine;
    WE = &wlengine;

    Handler *handler = new Handler;
    VLocalService *service = new VLocalService;
    service->setName("vecreen.welink");
    service->setHandler(handler);

    QTimer::singleShot(0, service, SLOT(start()));

    return a.exec();
}
