import QtQuick 2.0

Rectangle {
    id: container

    property string text: "Button"

    signal clicked

    width: buttonLabel.width + 20; height: buttonLabel.height + 5
    border { width: 1; color: "black" }
    radius: 8
    color: "purple"


    MouseArea {
        id: mouseArea
        anchors.fill: parent
        onClicked: container.clicked();
    }

    Text {
        id: buttonLabel
        anchors.centerIn: container
        color: "black"
        text: container.text
    }
}
