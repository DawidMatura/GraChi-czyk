import QtQuick 2.0

Rectangle {
    id: baza
    color: "black"
    Grid{
        columns: 1
        Pole{
            id: poleBaza1
            color: baza.color
        }
        Pole{
            id: poleBaza2
            color: baza.color
        }
        Pole{
            id: poleBaza3
            color: baza.color
        }
        Pole{
            id: poleBaza4
            color: baza.color
        }
    }
}
