#ifndef BACKGROUNDWORKER_H
#define BACKGROUNDWORKER_H

#include <QThread>

typedef int Result; // TODO: make it a template param?
class BackgroundWorker: public QThread
{
    Q_OBJECT
public:
    explicit BackgroundWorker(QObject *parent = 0) : QThread(parent) {}
    
    void run();
signals:
    void resultReady(Result);
    
public slots:
    
};

#endif // BACKGROUNDWORKER_H
