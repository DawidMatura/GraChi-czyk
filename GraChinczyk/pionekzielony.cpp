#include "pionekzielony.h"
#include "gra.h"
PionekZielony::PionekZielony()
{
   indexStart=20;
       indexStop=19;
}

PionekZielony::PionekZielony(int x, int y, int id)
{
    indexStart=x;
    indexStop=y;
    setX(x);
    setY(y);
    setId(id);
}


void PionekZielony::ruch(int liczba)
{
   if(Gra::getTura()==2)
   {
       if((m_x == 750 || m_x == 800) && ( m_y == 50 || m_y == 100)){
           if((Gra::m_kostka.liczba() == 1 || Gra::m_kostka.liczba() == 6)){
               //pole startowe
               setX(475);
               setY(175);
               m_addX = 50;
               m_addY = 0;
               int id=Gra::CzyZajete(m_x,m_y,m_id);
               qDebug()<<id;
                if(id>3 && id!=-1)
               {
                   qDebug()<<"wyrzucam zie ";
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
               if(m_x == 425 && m_y== 175){
                   m_addX = 0;
                   m_addY = 50;
               }
               if(m_x == 425 && m_y== 375){
                   m_addX = 0;
                   m_addY = 0;
               }
               setX(m_x + m_addX);
               setY(m_y + m_addY);
           }
           int id=Gra::CzyZajete(m_x,m_y,m_id);
           qDebug()<<id;
           if(id>3 && id!=-1)
           {
               qDebug()<<"wyrzucam zie ";
               Gra::Wyrzuc(id);
           }
           if(liczba != 6){
               Gra::NastepnyGracz();
           }
       }
       Gra::m_kostka.setLiczba(0);
   }
}

