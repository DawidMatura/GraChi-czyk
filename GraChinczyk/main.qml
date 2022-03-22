import QtQuick 2.15
import QtQuick.Window 2.15

import "GenerowaniePlanszy.js" as Generuj



Rectangle{
    id: root
    width: 900
    height: 900
    z: -1
    Component.onCompleted: Generuj.startNewGame()
    Background{
        rotation: 290
        scale: 1.5
    }

    PoleStartowe {
        id: startCzerwone
        x: 50
        y: 50
        color: "#ff4d4d"
    }
    PoleStartowe {
        id: startZolte
        x: root.width - 150
        y: root.height - 150
        color: "#ffdd45"
    }
    PoleStartowe {
        id: startZielone
        x: root.width - 150
        y: 50
        color: "#73ff70"
    }
    PoleStartowe {
        id: startNiebieskie
        x: 50
        y: root.height - 150
        color: "#70a0ff"
    }

    Pole{
        id: poleStartoweZielone
        x: 475
        y: 175
        z:1
        color: "#73ff70"
        border.width: 2
    }
    Pole{
        id: poleStartoweZolte
        x: 675
        y: 475
        z:1
        color: "#ffdd45"
        border.width: 2
    }
    Pole{
        id: poleStartoweNiebieskie
        x: 375
        y: 675
        z:1
        color: "#70a0ff"
        border.width: 2
    }
    Pole{
        id: poleStartoweCzerwone
        x: 175
        y: 375
        z:1
        color: "#ff4d4d"
        border.width: 2
    }


    Pionek {
        id: pionekCzerwony1
        x: m_pionekCzerwony1.x
        y: m_pionekCzerwony1.y
        width: 50
        gradient: Gradient {
            GradientStop { position: 0.0; color: "#8f0c00" }
            GradientStop { position: 0.8; color: "#ff3321" }
        }
        MouseArea{
            anchors.fill: parent
            onClicked: m_gra.graj(m_pionekCzerwony1.id)
        }       
    }
    Pionek {
        id: pionekCzerwony2
        x: m_pionekCzerwony2.x
        y: m_pionekCzerwony2.y
        width: 50
        gradient: Gradient {
            GradientStop { position: 0.0; color: "#8f0c00" }
            GradientStop { position: 0.8; color: "#ff3321" }
        }
        MouseArea{
            anchors.fill: parent
            onClicked: m_gra.graj(m_pionekCzerwony2.id)
        }
    }
    Pionek {
        id: pionekCzerwony3
        x: m_pionekCzerwony3.x
        y: m_pionekCzerwony3.y
        width: 50
        gradient: Gradient {
            GradientStop { position: 0.0; color: "#8f0c00" }
            GradientStop { position: 0.8; color: "#ff3321" }
        }
        MouseArea{
            anchors.fill: parent
            onClicked: m_gra.graj(m_pionekCzerwony3.id)
        }
    }
    Pionek {
        id: pionekCzerwony4
        x: m_pionekCzerwony4.x
        y: m_pionekCzerwony4.y
        width: 50
        gradient: Gradient {
            GradientStop { position: 0.0; color: "#8f0c00" }
            GradientStop { position: 0.8; color: "#ff3321" }
        }
        MouseArea{
            anchors.fill: parent
            onClicked: m_gra.graj(m_pionekCzerwony4.id)
        }
    }
    Pionek {
        id: pionekZielony1
        x: m_pionekZielony1.x
        y: m_pionekZielony1.y
        width: 50
        gradient: Gradient {
            GradientStop { position: 0.0; color: "#025400" }
            GradientStop { position: 0.8; color: "#24d620" }
        }
        MouseArea{
            anchors.fill: parent
            onClicked: m_gra.graj(m_pionekZielony1.id)
        }
    }
    Pionek {
        id: pionekZielony2
        x: m_pionekZielony2.x
        y: m_pionekZielony2.y
        width: 50
        gradient: Gradient {
            GradientStop { position: 0.0; color: "#025400" }
            GradientStop { position: 0.8; color: "#24d620" }
        }
        MouseArea{
            anchors.fill: parent
            onClicked: m_gra.graj(m_pionekZielony2.id)
        }
    }
    Pionek {
        id: pionekZielony3
        x: m_pionekZielony3.x
        y: m_pionekZielony3.y
        width: 50
        gradient: Gradient {
            GradientStop { position: 0.0; color: "#025400" }
            GradientStop { position: 0.8; color: "#24d620" }
        }
        MouseArea{
            anchors.fill: parent
            onClicked: m_gra.graj(m_pionekZielony3.id)
        }
    }
    Pionek {
        id: pionekZielony4
        x: m_pionekZielony4.x
        y: m_pionekZielony4.y
        width: 50
        gradient: Gradient {
            GradientStop { position: 0.0; color: "#025400" }
            GradientStop { position: 0.8; color: "#24d620" }
        }
        MouseArea{
            anchors.fill: parent
            onClicked: m_gra.graj(m_pionekZielony4.id)
        }
    }
    Pionek {
        id: pionekNiebieski1
        x: m_pionekNiebieski1.x
        y: m_pionekNiebieski1.y
        width: 50
        gradient: Gradient {
            GradientStop { position: 0.0; color: "#00025e" }
            GradientStop { position: 0.8; color: "#0062ff" }
        }
        MouseArea{
            anchors.fill: parent
            onClicked: m_gra.graj(m_pionekNiebieski1.id)
        }
    }
    Pionek {
        id: pionekNiebieski2
        x: m_pionekNiebieski2.x
        y: m_pionekNiebieski2.y
        width: 50
        gradient: Gradient {
            GradientStop { position: 0.0; color: "#00025e" }
            GradientStop { position: 0.8; color: "#0062ff" }
        }
        MouseArea{
            anchors.fill: parent
            onClicked: m_gra.graj(m_pionekNiebieski2.id)
        }
    }
    Pionek {
        id: pionekNiebieski3
        x: m_pionekNiebieski3.x
        y: m_pionekNiebieski3.y
        width: 50
        gradient: Gradient {
            GradientStop { position: 0.0; color: "#00025e" }
            GradientStop { position: 0.8; color: "#0062ff" }
        }
        MouseArea{
            anchors.fill: parent
            onClicked: m_gra.graj(m_pionekNiebieski3.id)
        }
    }
    Pionek {
        id: pionekNiebieski4
        x: m_pionekNiebieski4.x
        y: m_pionekNiebieski4.y
        width: 50
        gradient: Gradient {
            GradientStop { position: 0.0; color: "#00025e" }
            GradientStop { position: 0.8; color: "#0062ff" }
        }
        MouseArea{
            anchors.fill: parent
            onClicked: m_gra.graj(m_pionekNiebieski4.id)
        }
    }
    Pionek {
        id: pionekZolty1
        x: m_pionekZolty1.x
        y: m_pionekZolty1.y
        width: 50
        gradient: Gradient {
            GradientStop { position: 0.0; color: "#5d5e00" }
            GradientStop { position: 0.8; color: "#fbff00" }
        }
        MouseArea{
            anchors.fill: parent
            onClicked: m_gra.graj(m_pionekZolty1.id)
        }
    }
    Pionek {
        id: pionekZolty2
        x: m_pionekZolty2.x
        y: m_pionekZolty2.y
        width: 50
        gradient: Gradient {
            GradientStop { position: 0.0; color: "#5d5e00" }
            GradientStop { position: 0.8; color: "#fbff00" }
        }
        MouseArea{
            anchors.fill: parent
            onClicked: m_gra.graj(m_pionekZolty2.id)
        }
    }
    Pionek {
        id: pionekZolty3
        x: m_pionekZolty3.x
        y: m_pionekZolty3.y
        width: 50
        gradient: Gradient {
            GradientStop { position: 0.0; color: "#5d5e00" }
            GradientStop { position: 0.8; color: "#fbff00" }
        }
        MouseArea{
            anchors.fill: parent
            onClicked: m_gra.graj(m_pionekZolty3.id)
        }
    }
    Pionek {
        id: pionekZolty4
        x: m_pionekZolty4.x
        y: m_pionekZolty4.y
        width: 50
        gradient: Gradient {
            GradientStop { position: 0.0; color: "#5d5e00" }
            GradientStop { position: 0.8; color: "#fbff00" }
        }
        MouseArea{
            anchors.fill: parent
            onClicked: m_gra.graj(m_pionekZolty4.id)
        }
    }   

    Baza {
        id: bazaZielone
        x: 425
        y: 225
        color: "#73ff70"
    }
    Baza {
        id: bazaNiebieskie
        x: 425
        y: 475
        color: "#70a0ff"
    }
    BazaPozioma {
        id: bazaCzerwone
        x: 225
        y: 425
        color: "#ff4d4d"
    }
    BazaPozioma {
        id: bazaZolte
        x: 475
        y: 425
        color: "#ffdd45"
    } 

    Rectangle {
        id: gracz
        x: kostka.x - 25
        y: kostka.y -100
        width: 100
        height: 100
        color: "transparent"
        Text {
            id: gracztxt
            font.pointSize: 10
        }
    }

    Rectangle {
        id: kostka
        x: parent.width - 100
        y: parent.height / 2
        width: 100
        height: 100
        color: "transparent"
        Text {
            id: liczba
            text: m_kostka.liczba
            font.pointSize: 30
        }
    }

    Button {
        x: kostka.x - 30
        y: kostka.y + 75
        text: "Rzuc kostka"
        onClicked:{
            switch(m_gra.getTura()){
            case 0: gracztxt.text = "Teraz gra: \nNiebieski"; break;
            case 1: gracztxt.text = "Teraz gra: \nCzerwony"; break;
            case 2: gracztxt.text = "Teraz gra: \nZielony"; break;
            case 3: gracztxt.text = "Teraz gra: \nZolty"; break;
            }

            m_kostka.rzut()
        }
        color: "#FF2313"
    }

    Image {
        id: smok
        anchors.fill: parent
        source: "SmokP.png"
        scale: 0.5
        opacity: 0.7
    }

}

