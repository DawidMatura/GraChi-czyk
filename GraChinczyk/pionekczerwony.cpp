#include "pionekczerwony.h"

PionekCzerwony::PionekCzerwony():Pionek()
{
    indexStart=0;
    indexStop=39;
}

PionekCzerwony::PionekCzerwony(int x, int y, int id)
{
    indexStart=x;
    indexStop=y;
    setX(x);
    setY(y);
    setId(id);
}


void PionekCzerwony::ruch(int liczba)
{ 
    if(Gra::getTura()==1)
    {
        if(((m_x == 50 || m_x == 100) && ( m_y == 50 || m_y == 100))){
            if((Gra::m_kostka.liczba() == 1 || Gra::m_kostka.liczba() == 6)){
                //pole startowe
                setX(175);
                setY(375);
                m_addX = 0;
                m_addY = -50;
                int id=Gra::CzyZajete(m_x,m_y,m_id);
                qDebug()<<id;
                if((id<4 || id>7) && id!=-1)
                {
                    qDebug()<<"wyrzucam cze ";
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
                if(m_x == 175 && m_y == 425){
                    m_addX = 50;
                    m_addY = 0;
                }
                if(m_x == 375 && m_y == 425){
                    m_addX = 0;
                    m_addY = 0;
                }

                setX(m_x + m_addX);
                setY(m_y + m_addY);
            }
            int id=Gra::CzyZajete(m_x,m_y,m_id);
            qDebug()<<id;
            if((id<4 || id>7) && id!=-1)
            {
                qDebug()<<"wyrzucam cz ";
                Gra::Wyrzuc(id);
            }          
            if(liczba != 6){
                Gra::NastepnyGracz();
            }
        }
        Gra::m_kostka.setLiczba(0);
    }  
}
