#ifndef PIONEK_H
#define PIONEK_H
#include <QObject>
#include <QDebug>
class Pionek : public QObject
{
    Q_OBJECT
protected:

    int m_x;
    int m_y;
    int m_id;


public:
    int indexStart;
    int indexStop;
    Pionek()
    {

    }    

    void wyrzuc();
//    virtual void doBoxu(int ruch)=0;
//    virtual void ruchWBoxie()=0;
    int x() const;
    void setX(int a);
    int y() const;
    void setY(int a);
    int id() const;
    void setId(int a);
public slots:
    virtual void ruch(int x)=0;
signals:
    void xChanged();
    void yChanged();
    void idChanged();




};
#endif // PIONEK_H
