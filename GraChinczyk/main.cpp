#include <QGuiApplication>
#include <QQmlContext>
#include <QQuickView>

#include "QDebug"

#include "kostka.h"
#include "gra.h"
#include "pionekzielony.h"
#include "pionekczerwony.h"
#include "pionekniebieski.h"
#include "pionekzolty.h"
Pionek* Gra::m_pionki[16];
Kostka Gra::m_kostka;
int Gra::m_tura=1;
int main(int argc, char *argv[])
{
#if QT_VERSION < QT_VERSION_CHECK(6, 0, 0)
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
#endif

    QGuiApplication app(argc, argv);
    QQuickView view;
    const QUrl url(QStringLiteral("qrc:/main.qml"));
    QQmlContext* context = view.rootContext();

    Gra g;

    context->setContextProperty("m_kostka", &g.m_kostka);
    context->setContextProperty("m_gra", &g);

    context->setContextProperty("m_pionekZielony1", g.m_pionki[0]);
    context->setContextProperty("m_pionekZielony2", g.m_pionki[1]);
    context->setContextProperty("m_pionekZielony3", g.m_pionki[2]);
    context->setContextProperty("m_pionekZielony4", g.m_pionki[3]);
    context->setContextProperty("m_pionekCzerwony1", g.m_pionki[4]);
    context->setContextProperty("m_pionekCzerwony2", g.m_pionki[5]);
    context->setContextProperty("m_pionekCzerwony3", g.m_pionki[6]);
    context->setContextProperty("m_pionekCzerwony4", g.m_pionki[7]);
    context->setContextProperty("m_pionekNiebieski1", g.m_pionki[8]);
    context->setContextProperty("m_pionekNiebieski2", g.m_pionki[9]);
    context->setContextProperty("m_pionekNiebieski3", g.m_pionki[10]);
    context->setContextProperty("m_pionekNiebieski4", g.m_pionki[11]);
    context->setContextProperty("m_pionekZolty1", g.m_pionki[12]);
    context->setContextProperty("m_pionekZolty2", g.m_pionki[13]);
    context->setContextProperty("m_pionekZolty3", g.m_pionki[14]);
    context->setContextProperty("m_pionekZolty4", g.m_pionki[15]);

    view.setResizeMode(QQuickView::SizeRootObjectToView);
    view.setSource(url);
    view.show();

    return app.exec();
}
