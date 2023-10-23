import QtQuick 2.12
import QtQuick.Controls 2.12
import QtQuick.Layouts 1.3
import QtQuick.VirtualKeyboard 2.0

GridLayout {
    columns: 3
    width: 886
    height: 50

    property var youTubeSearch
    property var webEngineView

    InputPanel {
             id: inputPanel
             z: 99
             width: parent.width
             Layout.alignment: Qt.AlignBottom
             visible: Qt.inputMethod.visible
     }

     TextField {
         id: textField
         width: 500
         height: 50
         placeholderText: "Search YouTube"
         placeholderTextColor: "#000000"
         Layout.fillWidth: true
         focus: true
         onActiveFocusChanged: {
             if (activeFocus) {
                 inputPanel.open(textField)
             }
         }
    }

    Button {
        implicitWidth: 30
        implicitHeight: 30

        contentItem: Image {
            source: "/images/search_glass.png"
            anchors.fill: parent
            fillMode: Image.PreserveAspectFit
        }

        background: Rectangle {
               color: "white"
               radius: width * 0.5
           }

        onClicked: {
            webEngineView.url = "about:blank";
            webEngineView.visible = false;
            youTubeSearch.searchVideos(textField.text)
        }
    }

    Button {
        implicitWidth: 30
        implicitHeight: 30

        contentItem: Image {
            source: "/images/X.png"
            anchors.fill: parent
            fillMode: Image.PreserveAspectFit
        }

        background: Rectangle {
               color: "white"
               radius: width * 0.5
           }

        onClicked: {
            webEngineView.url = "about:blank";
            webEngineView.visible = false;
        }
    }
}
