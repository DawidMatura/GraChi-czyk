import QtQuick 2.0

Rectangle {
    id: base
    z: 1
    width: 100
    height: width
    border.width: 1
    radius: width * 0.5
    rotation: 235
    gradient: Gradient {
        GradientStop { position: 0.0; color: "#6b6b6b" }
        GradientStop { position: 0.8; color: "#a6a6a6" }
    }

    Rectangle {
        anchors.centerIn: base
        width: base.width*0.6
        height: width
        color: "transparent"
        border.width: 2
        radius: width * 0.5
    }  
    Behavior on x { NumberAnimation { duration: 400; easing.type: Easing.OutBack } }
    Behavior on y { NumberAnimation { duration: 400; easing.type: Easing.OutBack } }
}
