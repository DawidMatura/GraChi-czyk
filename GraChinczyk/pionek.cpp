#include "pionek.h"

int Pionek::x() const { return m_x;}

void Pionek::setX(int a){
    if(a != m_x){
        m_x = a;
        emit xChanged();
    }
}

int Pionek::y() const { return m_y;}

void Pionek::setY(int a){
    if(a != m_y){
        m_y = a;
        emit yChanged();
    }
}

int Pionek::id() const { return m_id;}

void Pionek::setId(int a){
    if(a != m_id){
        m_id = a;
        emit idChanged();
    }
}

