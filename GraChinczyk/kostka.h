#ifndef KOSTKA_H
#define KOSTKA_H
#include "QRandomGenerator"

#include <QObject>

class Kostka :public QObject
{
    Q_OBJECT

    Q_PROPERTY(int liczba READ liczba WRITE setLiczba NOTIFY liczbaChanged)

    int m_liczba;

public:
    Kostka();
    Q_INVOKABLE void rzut();
    int liczba() const;
    void setLiczba(int l);
signals:
    void liczbaChanged();
    void kosciZostalyRzucone();
};

#endif // KOSTKA_H
