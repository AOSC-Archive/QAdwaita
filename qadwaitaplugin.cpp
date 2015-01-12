#include "qadwaitaplugin.h"


QAdwaitaPlugin::QAdwaitaPlugin(QObject *parent) :
    QStylePlugin(parent)
{
}

#if QT_VERSION < 0x050000
Q_EXPORT_PLUGIN2(QAdwaita, QAdwaitaPlugin)
#endif // QT_VERSION < 0x050000
