#include "pionekzolty.h"
#include "gra.h"
PionekZolty::PionekZolty()
{
    indexStart=30;
    indexStop=29;
}

PionekZolty::PionekZolty(int x, int y, int id)
{
    indexStart=x;
    indexStop=y;
    setX(x);
    setY(y);
    setId(id);
}


void PionekZolty::ruch(int liczba)
{
    if(Gra::getTura()==3)
    {
        if((m_x == 750 || m_x == 800) && ( m_y == 750 || m_y == 800)){
            if((Gra::m_kostka.liczba() == 1 || Gra::m_kostka.liczba() == 6)){
                //pole startowe
                setX(675);
                setY(475);
                m_addX = 0;
                m_addY = 50;
                int id=Gra::CzyZajete(m_x,m_y,m_id);
                qDebug()<<id;
                if(id<12 && id!=-1)
                {
                    qDebug()<<"wyrzucam zol ";
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
                if(m_x == 675 && m_y== 425){
                    m_addX = -50;
                    m_addY = 0;
                }
                if(m_x == 475 && m_y== 425){
                    m_addX = 0;
                    m_addY = 0;
                }
                setX(m_x + m_addX);
                setY(m_y + m_addY);
            }

            int id=Gra::CzyZajete(m_x,m_y,m_id);
            qDebug()<<id;
            if(id<12 && id!=-1)
            {
                qDebug()<<"wyrzucam zol ";
                Gra::Wyrzuc(id);
            }          
            if(liczba !=6){
                Gra::NastepnyGracz();
            }
        }
        Gra::m_kostka.setLiczba(0);
    }  
}
