#include <QDebug>
#include <QString>
#include "wlengine.h"

static int page_update(int page, void *para)
{
    switch ((wl_apl_pctl_type_t)page) {
    case WL_PAGE_TYPE_SOURCE_OFF:
    case WL_PAGE_TYPE_AUTH_DISPLAY:
        if (NULL != para) {
            QString err_code((char *)para);
            //Todo
        }
        break;
    case WL_PAGE_TYPE_WECHAT_LOGIN:
        if (NULL != para) {
            wl_apl_rgb_info_t *info = (wl_apl_rgb_info_t *)para;
            //Todo
        }
        break;
    case WL_PAGE_TYPE_RUNNING:
        if (NULL != para) {
            wl_apl_image_info_t *info = (wl_apl_image_info_t *)para;
            //Todo
        }
        break;
    default:
        break;
    }
   return 0;
}

static int msg_recv(int msg, void *para)
{
    qDebug() << "msg_recv start:" << msg;
    return 0;

    switch (msg) {
    case WL_APL_MSG_TYPE_APL_REQ_SHOW:
        //Show Welink
        WE->wl_send_msg(WL_APL_MSG_TYPE_APP_SHOW_WELINK, NULL);
        break;
    case WL_APL_MSG_TYPE_APL_REQ_HIDE:
        //Hide Welink
        wl_apl_send_msg(WL_APL_MSG_TYPE_APP_HIDE_WELINK, NULL);
        break;
    case WL_APL_MSG_TYPE_APL_OPEN_BT:
        //Todo
        break;
    case WL_APL_MSG_TYPE_APL_REQ_BT_ADDR: {
        //Send IVI BT mac address
        QString btaddr = QString("3e:4c:0a:0b:cc:e3");
        wl_apl_send_msg(WL_APL_MSG_TYPE_APP_BT_ADDR, btaddr.data());
    }
        break;
    case WL_APL_MSG_TYPE_APL_RECV_MSG:
        if (NULL != para) {
            int type = *(int *)para;
            //Todo
        }
        break;
    case WL_APL_MSG_TYPE_APL_UPDATE_KEY:
        if (NULL != para) {
            int key = *(int *)para;
            //Todo
        }
        break;
    case WL_APL_MSG_TYPE_APL_START_RECORD:
        //Todo
        break;
    case WL_APL_MSG_TYPE_APL_STOP_RECORD:
        //Todo
        break;
    default:
        break;
    }

    return 0;
}

static int data_audio(void *data, int len)
{
    return 0;
}

Wlengine::Wlengine()
{
#if 0
    QLibrary library("libwl_apl_shared.so");
    if (!library.load())
        qDebug() << "Fail to load WL share library: libwl_apl_shared.so in LD_LIBRARY_PATH";
    else {
        qDebug() << "libwl_apl_shared.so loaded";
        wl_set_config = (WlAplSetConfig)library.resolve("wl_apl_set_config");
        wl_send_msg = (WlAplSendMsg)library.resolve("wl_apl_send_msg");
        wl_init = (WlAplInit)library.resolve("wl_apl_init");
        engine_init();
        qDebug() << "init finished";
    }
#endif
    engine_init();
}

int Wlengine::engine_init()
{
    qDebug() << "Wlengine init start";
    wl_apl_config_t config;

    config.config_file_path = NULL;
    config.huVersion = "V1.6.01709211";
    config.fmt = WL_APL_IMAGE_FORMAT_RGBA;
    config.screen.x = 0;
    config.screen.y = 0;
    config.screen.w = 800;
    config.screen.h = 430;
    config.cb_func.func_msg_notice = msg_recv;
    config.cb_func.func_update_page = page_update;
    config.cb_func.func_audio_data = data_audio;

    wl_apl_set_config(&config);
    wl_apl_init();
    //Send auth code to engine, replace it with real one
    //const char *sn = "FF:FF:FF:FF:FF";
    const char *sn = "DEMOLHADWELINK042";
    wl_apl_send_msg(WL_APL_MSG_TYPE_APP_SER_NUM, (void *)sn);
    //Show Welink
    wl_apl_send_msg(WL_APL_MSG_TYPE_APP_SHOW_WELINK, NULL);

    qDebug() << "Wlengine init complete";
    return 0;
}
