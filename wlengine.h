#ifndef WLENGINE_H
#define WLENGINE_H

#include <QObject>
#include <QLibrary>

#include "wl_apl.h"

class Wlengine : public QObject
{
    Q_OBJECT

public:
    Wlengine();

    typedef  int (*WlAplSetConfig)(wl_apl_config_t *config);
    typedef int (*WlAplSendMsg)(int msg, void *para);
    typedef int (*WlAplInit)(void);
    WlAplSetConfig wl_set_config;
    WlAplSendMsg wl_send_msg;
    WlAplInit wl_init;

private:
    int engine_init();

};

extern Wlengine *WE;
#endif // WLENGINE_H
