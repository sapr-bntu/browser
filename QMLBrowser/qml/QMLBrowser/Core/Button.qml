// import QtQuick 1.0 // to target S60 5th Edition or Maemo 5
import QtQuick 1.1
import QtQuick 1.0

Item {
    property alias image: icon.source
    property variant action

    signal clicked

    width: 40
    height: parent.height

    Image {
        id: icon
        anchors.centerIn: parent
        opacity: if (action !== undefined) {
                     action.enabled ? 1.0 : 0.4
                 } else 1
    }

    MouseArea {
        anchors {
            fill: parent
            topMargin: -10
            bottomMargin: -10
        }

        onClicked: {
            if (action !== undefined)
                action.trigger()
            parent.clicked()
        }
    }
}
