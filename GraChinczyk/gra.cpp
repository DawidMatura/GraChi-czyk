 #include "gra.h"
#include <QString>
#include <QDebug>

int Gra::getTura()
{
    return m_tura % 4;
}

void Gra::NastepnyGracz()
{
    m_tura++;
}

Gra::Gra()
{
    m_pionki[0] = new PionekZielony(750,50, 0);
    m_pionki[1] = new PionekZielony(750,100, 1);
    m_pionki[2] = new PionekZielony(800,50, 2);
    m_pionki[3] = new PionekZielony(800,100, 3);
    m_pionki[4] = new PionekCzerwony(50,50, 4);
    m_pionki[5] = new PionekCzerwony(50,100, 5);
    m_pionki[6] = new PionekCzerwony(100,50, 6);
    m_pionki[7] = new PionekCzerwony(100,100, 7);
    m_pionki[8] = new PionekNiebieski(50,750, 8);
    m_pionki[9] = new PionekNiebieski(100,750, 9);
    m_pionki[10] = new PionekNiebieski(50,800, 10);
    m_pionki[11] = new PionekNiebieski(100,800, 11);
    m_pionki[12] = new PionekZolty(750,750, 12);
    m_pionki[13] = new PionekZolty(800,750, 13);
    m_pionki[14] = new PionekZolty(750,800, 14);
    m_pionki[15] = new PionekZolty(800,800, 15);

}

void Gra::graj(int id)
{
    m_pionki[id]->ruch(m_kostka.liczba());
}

int Gra::CzyZajete(int x, int y,int id)
{
    for(int i =0; i<16;i++)
    {
        if(x==Gra::m_pionki[i]->x() && y==Gra::m_pionki[i]->y() && i!=id )
            return Gra::m_pionki[i]->id();
    }
    return -1;
}

void Gra::Wyrzuc(int id)
{
  m_pionki[id]->setX(m_pionki[id]->indexStart);
  m_pionki[id]->setY(m_pionki[id]->indexStop);

}
