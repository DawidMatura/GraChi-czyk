#include "kostka.h"

Kostka::Kostka()
    :m_liczba(0)
{

}

void Kostka::rzut()
{
    int los = QRandomGenerator::global()->bounded(1, 7);
    setLiczba(los);
    emit kosciZostalyRzucone();
}

int Kostka::liczba() const
{
    return m_liczba;
}

void Kostka::setLiczba(int l)
{
    if(m_liczba != l){
        m_liczba = l;
        emit liczbaChanged();
    }
}


