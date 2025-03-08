#include "pythoninvoker.h"
#include <QString>
#include <Python.h>
#include <QDebug>

QString output_1 = "D:/my-land-cover-classfication/result/output_1.png";
QString output_2 = "D:/my-land-cover-classfication/result/output_2.png";
QString output="D:/my-land-cover-classfication/result/output.png";
static bool isPythonInitialized = false;

pythonInvoker::pythonInvoker() {}

void pythonInvoker::invokePredict(QString filePath_1, QString filePath_2)
{
    qDebug() << "预测的图片为:"<<filePath_1 << " " << filePath_2;
    if (!isPythonInitialized)
    {
        Py_Initialize();
        isPythonInitialized = true;
    }
    QString filePath = "D:/my-land-cover-classfication";
    PyObject* sysPath = PySys_GetObject("path");
    PyObject* pathEntry = PyUnicode_FromString(filePath.toUtf8().constData());
    PyList_Append(sysPath, pathEntry);
    Py_DECREF(pathEntry);
    PyObject* file = PyImport_ImportModule("predict");
    PyObject* callback = PyObject_GetAttrString(file, "predict");

    PyObject* args_1 = PyTuple_New(2);
    PyTuple_SetItem(args_1, 0, PyUnicode_FromString(filePath_1.toUtf8().constData()));
    PyTuple_SetItem(args_1, 1, PyUnicode_FromString(output_1.toUtf8().constData()));
    PyObject* ret_1 = PyObject_CallObject(callback, args_1);
    Py_DECREF(args_1);
    Py_XDECREF(ret_1);

    PyObject* args_2 = PyTuple_New(2);
    PyTuple_SetItem(args_2, 0, PyUnicode_FromString(filePath_2.toUtf8().constData()));
    PyTuple_SetItem(args_2, 1, PyUnicode_FromString(output_2.toUtf8().constData()));
    PyObject* ret_2 = PyObject_CallObject(callback, args_2);

    Py_DECREF(args_2);
    Py_XDECREF(ret_2);
    Py_DECREF(callback);
    Py_DECREF(file);
}
QString pythonInvoker::invokeDiff()
{
    if (!isPythonInitialized)
    {
        Py_Initialize();
        isPythonInitialized = true;
    }
    QString filePath = "D:/my-land-cover-classfication";
    PyObject* sysPath = PySys_GetObject("path");
    PyObject* pathEntry = PyUnicode_FromString(filePath.toUtf8().constData());
    PyList_Append(sysPath, pathEntry);
    Py_DECREF(pathEntry);
    PyObject* file = PyImport_ImportModule("constrast");
    PyObject* callback = PyObject_GetAttrString(file, "constrast");
    PyObject* args = PyTuple_New(3);
    PyTuple_SetItem(args, 0, PyUnicode_FromString(output_1.toUtf8().constData()));
    PyTuple_SetItem(args, 1, PyUnicode_FromString(output_2.toUtf8().constData()));
    PyTuple_SetItem(args, 2, PyUnicode_FromString(output.toUtf8().constData()));
    PyObject* ret = PyObject_CallObject(callback,args);
    Py_XDECREF(ret);
    Py_DECREF(callback);
    Py_DECREF(file);
    return output;
}
