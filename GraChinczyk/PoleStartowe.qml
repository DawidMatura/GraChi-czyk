import QtQuick 2.0

Rectangle {
    id: pole
    width: 100
    height: 100
    color: "black"
    Grid{
        columns: 2
        Pole{
            id: poleStart1
            color: pole.color
        }
        Pole{
            id: poleStart2
            color: pole.color
        }
        Pole{
            id: poleStart3
            color: pole.color
        }
        Pole{
            id: poleStart4
            color: pole.color
        }
    }
}
