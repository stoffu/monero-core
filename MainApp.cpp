#include "MainApp.h"
#include <QCloseEvent>

bool MainApp::event (QEvent *event)
{
    // Catch application exit event and signal to qml app to handle exit
    if(event->type() == QEvent::Close) {
        event->ignore();
        emit closing();
        return true;
    }

    // Pass unhandled events to base class 
    return QApplication::event(event);
}
