#ifndef TOOL_H
#define TOOL_H
#include <QMenuBar>
#include <QAction>
#include <QString>
#include"graphicdisplay.h"
class tool
{
public:
    //查找某一元素类
    template <typename T>
    static T* myFindElement(QObject* parent, const QString& name);
    static QMenu* myFindMenu(QMenuBar* menuBar, const QString& name);
    static QAction* myFindAction(QMenu* menu, const QString& name);
    static void saveImageToJson(QString,graphicDisplay*);
    static void loadJson(graphicDisplay*);
    static void removeJson(QString,graphicDisplay*);
};

#endif // TOOL_H
