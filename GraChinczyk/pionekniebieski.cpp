#include "pionekniebieski.h"
#include "gra.h"
PionekNiebieski::PionekNiebieski()
{
    indexStart=10;
    indexStop=9;
}

PionekNiebieski::PionekNiebieski(int x, int y, int id)
{
    indexStart=x;
    indexStop=y;
    setX(x);
    setY(y);
    setId(id);
}


void PionekNiebieski::ruch(int liczba)
{
    if(Gra::getTura()==0)
    {
        if((m_x == 50 || m_x == 100) && ( m_y == 750 || m_y == 800)){
            if((Gra::m_kostka.liczba() == 1 || Gra::m_kostka.liczba() == 6)){
                //pole startowe
                setX(375);
                setY(675);
                m_addX = -50;
                m_addY = 0;
                int id=Gra::CzyZajete(m_x,m_y,m_id);
                qDebug()<<id;
                if((id<8 || id>11) && id!=-1)
                {
                    qDebug()<<"wyrzucam nie ";
                    Gra::Wyrzuc(id);
                }
                Gra::NastepnyGracz();
            }
            else
             Gra::NastepnyGracz();
        }
        else{
            for(int i=0; i < liczba; i++){
                //prawy gorny
                if(m_x == 675 && m_y == 175){
                    m_addX = 0;
                    m_addY = 50;
                }
                //prawy dolny
                if(m_x == 675 && m_y == 675){
                    m_addX = -50;
                    m_addY = 0;
                }
                //lewy dolny
                if(m_x==175 && m_y==675){
                    m_addX = 0;
                    m_addY = -50;
                }
                //lewy gorny
                if(m_x == 175 && m_y== 175){
                    m_addX = 50;
                    m_addY = 0;
                }
                //wejscie do bazy
                if(m_x == 425 && m_y== 675){
                    m_addX = 0;
                    m_addY = -50;
                }
                if(m_x == 425 && m_y== 475){
                    m_addX = 0;
                    m_addY = 0;
                }
                setX(m_x + m_addX);
                setY(m_y + m_addY);
            }
            int id=Gra::CzyZajete(m_x,m_y,m_id);
            qDebug()<<id;
            if((id<8 || id>11) && id!=-1)
            {
                qDebug()<<"wyrzucam nie ";
                Gra::Wyrzuc(id);
            }
            if(liczba != 6){
            Gra::NastepnyGracz();
            }
        }
        Gra::m_kostka.setLiczba(0);
    }
}
