// import QtQuick 1.0 // to target S60 5th Edition or Maemo 5
import QtQuick 1.1
import QtQuick 1.0

Image {
    id: lineedit

    property alias editUrl: urlInput.url
    property bool urlChanged: false

    Column {
        width: parent.width

        Item {
            width: parent.width; height: 20
            Text {
                anchors.centerIn: parent
                text: webView.title
                font.pixelSize: 14
                font.bold: true
                color: "white"
                styleColor: "black"
                style: Text.Sunken
            }
        }

        Item {
            width: parent.width
            height: 40

            Button {
                id: backButton
                action: webView.back;
                image: "img/button_left2.bmp"
                anchors {   left: parent.left
                            bottom: parent.bottom }
            }

            Button {
                id: nextButton
                anchors.left: backButton.right
                action: webView.forward
                image: "img/batton_right2.bmp"
            }

            Url {
                id: urlInput
                x: 88
                y: 0
                width: 10
                height: 40
                anchors.leftMargin: 20
                anchors.rightMargin: 0
                anchors { left: nextButton.right
                    right: reloadButton.left
                }
                image: "img/display.png"
                onUrlEntered: {
                    webBrowser.urlString = url
                    webBrowser.focus = true
                    lineedit.urlChanged = false
                }
                onUrlChanged: lineedit.urlChanged = true
            }

            Button {
                id: reloadButton
                x: -161
                y: 0
                anchors { right: quitButton.left; rightMargin: 61 }
                action: webView.reload
                image: "img/update4.bmp"
            }

            Text {
                id: quitButton
                style: Text.Sunken
                anchors.right: parent.right
                anchors.top: parent.top
                anchors.bottom: parent.bottom
                verticalAlignment: Text.AlignVCenter
                horizontalAlignment: Text.AlignHCenter
                font.pixelSize: 18
                width: 60

           }

            Button {
                id: stopButton
                x: -121
                y: 0
                opacity: 1
                anchors { right: quitButton.left; rightMargin: 21 }
                action: webView.stop
                image: "img/x.bmp"

            }
        }
    }
}
