#include "backgroundworker.h"
#include <QDebug>

void BackgroundWorker::run() {
    forever {
        QThread::msleep(400);
        int rand = qrand();
        emit resultReady(rand);
    }
}
