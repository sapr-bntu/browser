// import QtQuick 1.0 // to target S60 5th Edition or Maemo 5
import QtQuick 1.1
import "Core"

Rectangle {
    id: webBrowser

    property string urlString : "http://www.bash.org.ru/"

    width: 800
    height: 600
    color: "#4c6452"

    Item { id: lineeditSpace
        width: parent.width
        height: 62 }

    LineEdit {
        id: lineedit
        editUrl: webBrowser.urlString
        width: lineeditSpace.width
        height: lineeditSpace.height
    }

    WebView {
        id: webView
        url: webBrowser.urlString
        onProgressChanged: lineedit.urlChanged = false
        anchors {
            top: lineeditSpace.bottom
            left: parent.left
            right: parent.right
            bottom: parent.bottom }
    }

//    Scroll {
//        scrollArea: webView
//        width: 12
//        anchors {   right: parent.right
//                    top: header.bottom
//                    bottom: parent.bottom
//        }
//    }

//    Scroll {
//        scrollArea: webView; height: 8; orientation: Qt.Horizontal
//        anchors { right: parent.right; rightMargin: 8; left: parent.left; bottom: parent.bottom }
//    }
}
