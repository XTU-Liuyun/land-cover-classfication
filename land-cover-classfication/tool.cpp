#include "tool.h"
#include "graphicdisplay.h"
#include<QDir>
#include <QMenuBar>
#include <QAction>
#include <QMenu>
#include <QDebug>
#include <qimage.h>
#include<QBuffer>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>
#include <QFile>
const QString configPath="D:/my-land-cover-classfication/land-cover-classfication";
template <typename T>     
T* tool::myFindElement(QObject* parent, const QString& name)
{
    foreach (T* element, parent->findChildren<T*>())
    {
        if (element->objectName() == name)
        {
            return element;
        }
    }
    return nullptr;
}
// 查找 QMenu
QMenu* tool::myFindMenu(QMenuBar* menuBar, const QString& name)
{
    return myFindElement<QMenu>(menuBar, name);
}
// 查找 QAction
QAction* tool::myFindAction(QMenu* menu, const QString& name)
{
    return myFindElement<QAction>(menu, name);
}
void tool::saveImageToJson(QString filePath,graphicDisplay* display)
{
    QString saveFile = (display->objectName() == "frame" ? "/config1.json" : "/config2.json");
    QFile file(configPath +QDir::separator()+ saveFile);
    QJsonObject jsonObject;
    if (file.exists())
    {
        if (file.open(QIODevice::ReadOnly | QIODevice::Text))
        {
            QByteArray fileData = file.readAll();
            QJsonDocument jsonDoc = QJsonDocument::fromJson(fileData);
            if (jsonDoc.isObject())
            {
                jsonObject = jsonDoc.object();
            }
            file.close();
        }
    }

    if (jsonObject.contains("imagePaths"))
    {
        QJsonArray imagePaths = jsonObject["imagePaths"].toArray();
        bool exists = false;
        for (const QJsonValue &value : imagePaths)
        {
            if (value.toString() == filePath)
            {
                exists = true;
                break;
            }
        }
        if (!exists)
        {
            imagePaths.append(filePath);
            jsonObject["imagePaths"] = imagePaths;
        }
    } else
    {
        QJsonArray newArray;
        newArray.append(filePath);
        jsonObject["imagePaths"] = newArray;
    }
    if (file.open(QIODevice::WriteOnly | QIODevice::Text))
    {
        QJsonDocument jsonDoc(jsonObject);
        file.write(jsonDoc.toJson());
        file.close();
    }
}
void tool::loadJson(graphicDisplay* display)
{
    QString saveFile = (display->objectName() == "frame" ? "/config1.json" : "/config2.json");
    qDebug()<<display->objectName();
    qDebug() << "json文件为:" << configPath + saveFile;
    QFile file(configPath + QDir::separator() + saveFile);
    if (!file.exists())return;
    if (!file.open(QIODevice::ReadOnly)) return;
    QByteArray fileData = file.readAll();
    file.close();
    QJsonDocument jsonDoc = QJsonDocument::fromJson(fileData);
    QJsonObject jsonObject = jsonDoc.object();
    if (jsonObject.contains("imagePaths"))
    {
        QJsonArray imagePathsArray = jsonObject["imagePaths"].toArray();
        for (const QJsonValue &value : imagePathsArray)
        {   
            QString imagePath = value.toString();
            display->add(imagePath, display);
        }
    }
}
void tool::removeJson(QString filePath, graphicDisplay* display)
{
    QString saveFile = (display->objectName() == "frame" ? "/config1.json" : "/config2.json");
    QFile file(configPath + QDir::separator() + saveFile);
    if (!file.exists() || !file.open(QIODevice::ReadOnly)) return;
    QByteArray fileData = file.readAll();
    file.close();
    QJsonDocument jsonDoc = QJsonDocument::fromJson(fileData);
    QJsonObject jsonObject = jsonDoc.object();
    if (jsonObject.contains("imagePaths"))
    {
        QJsonArray imagePathsArray = jsonObject["imagePaths"].toArray();
        for (int i = 0; i < imagePathsArray.size(); ++i)
        {
            if (imagePathsArray[i].toString() == filePath)
            {
                imagePathsArray.removeAt(i);
                qDebug() << "已在json中删除:" << filePath;
                jsonObject["imagePaths"] = imagePathsArray;
                break;
            }
        }
    }
    if (jsonObject.contains(filePath))
    {
        jsonObject.remove(filePath);
    }
    QJsonDocument updatedJsonDoc(jsonObject);
    if (file.open(QIODevice::WriteOnly))
    {
        file.write(updatedJsonDoc.toJson());
        file.close();
    }
}
