#include "stylehelper.h"



QString StyleHelper::getStartButtonsStyle()
{
    return "QPushButton{"
           "color:#fff;"
           "border-radius:19px;"
           "background-color:qlineargradient(spread:pad, x1:0.224, y1:0.642045, x2:1, y2:1, stop:0.1 rgba(255, 85, 0, 255), stop:1 rgba(255, 255, 255, 255))"
                    "}";
}
