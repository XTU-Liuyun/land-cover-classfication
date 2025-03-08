#ifndef PYTHONINVOKER_H
#define PYTHONINVOKER_H
#include<QString>
class pythonInvoker
{
public:
    pythonInvoker();
    static void invokePredict(QString,QString);
    static QString invokeDiff();
};

#endif // PYTHONINVOKER_H
