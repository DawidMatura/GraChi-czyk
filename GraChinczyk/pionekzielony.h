#ifndef PIONEKZIELONY_H
#define PIONEKZIELONY_H
#include "pionek.h"
#include <QObject>

class PionekZielony :  public Pionek
{
    Q_OBJECT
    Q_PROPERTY(int y READ y WRITE setY NOTIFY yChanged)
    Q_PROPERTY(int x READ x WRITE setX NOTIFY xChanged)
    Q_PROPERTY(int id READ id WRITE setId NOTIFY idChanged)
    int m_addX = 50;
    int m_addY = 0;

public:
    PionekZielony();
    PionekZielony(int x, int y, int id);
    void ruch(int x);


};

#endif // PIONEKZIELONY_H
