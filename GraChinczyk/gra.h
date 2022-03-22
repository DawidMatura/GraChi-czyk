#ifndef GRA_H
#define GRA_H
#include "kostka.h"
#include <QObject>
#include "pionekzielony.h"
#include "pionekczerwony.h"
#include "pionekniebieski.h"
#include "pionekzolty.h"

class Gra : public QObject
{
    Q_OBJECT
    static int m_tura;

public:
    static Kostka m_kostka;
    static Pionek* m_pionki[16];
    Q_INVOKABLE static int getTura();
    static void NastepnyGracz();

    Gra();
    Q_INVOKABLE static void graj(int id);
    static int CzyZajete(int x, int y, int id);
    static void Wyrzuc(int id);
};

#endif // GRA_H
