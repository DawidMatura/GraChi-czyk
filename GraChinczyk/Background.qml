import QtQuick 2.0

Rectangle {
    id: background
    anchors.fill: parent
    gradient: Gradient {
        GradientStop { position: 0.0; color: "#8c3e03" }
        GradientStop { position: 0.33; color: "#ffb300" }
        GradientStop { position: 1.0; color: "#ffdaa6" }
    }
}
