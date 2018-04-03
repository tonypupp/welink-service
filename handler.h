#ifndef HANDLER_H
#define HANDLER_H

#include <Vecreen/vhandler.h>

class Handler : public VHandler
{
    Q_OBJECT
    //WL_PAGE_TYPE_CHARGING
    Q_PROPERTY(int capcity MEMBER m_capcity)
    Q_PROPERTY(QString charge_time MEMBER m_charge_time)
    Q_PROPERTY(QString remaining_time MEMBER m_remaining_time)
    Q_PROPERTY(QString internet_time MEMBER m_internet_time)
    Q_PROPERTY(QString music_time MEMBER m_music_time)
    Q_PROPERTY(QString bt_time MEMBER m_bt_time)
    Q_PROPERTY(QString navi_time MEMBER m_navi_time)
public:
    explicit Handler(QObject *parent = nullptr);

signals:

public slots:
    void on_send_button(const QVariantMap &params);

private:
    //WL_PAGE_TYPE_CHARGING
    //Phone power capacity
    int m_capcity;
    QString m_charge_time;
    QString m_remaining_time;
    QString m_internet_time;
    QString m_music_time;
    QString m_bt_time;
    QString m_navi_time;
};

#endif // HANDLER_H
