#ifndef QADWAITAPLUGIN_H
#define QADWAITAPLUGIN_H

#include <QStylePlugin>


class QAdwaitaPlugin : public QStylePlugin
{
    Q_OBJECT
#if QT_VERSION >= 0x050000
    Q_PLUGIN_METADATA(IID "org.qt-project.Qt.QStyleFactoryInterface" FILE "QAdwaita.json")
#endif // QT_VERSION >= 0x050000

public:
    QAdwaitaPlugin(QObject *parent = 0);
};

#endif // QADWAITAPLUGIN_H
