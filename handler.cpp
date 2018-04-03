#include <QDebug>

#include "handler.h"

Handler::Handler(QObject *parent)
    : VHandler(parent), m_capcity(10), m_charge_time("4h36m"),
      m_remaining_time("2h22m"), m_internet_time("3h33m"), m_music_time("4h44m"),
      m_bt_time("5h55m"), m_navi_time("6h66m")
{

}

void Handler::on_send_button(const QVariantMap &params)
{
    int key = params.value("key").toInt();
    qDebug() << key;
}
