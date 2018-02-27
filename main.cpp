#include <QCoreApplication>
#include "logger.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    LoggerPtr logger;
    logger = LoggerPtr(new Logger());
    logger->OpenFile();
    logger->Log("Debug", "Main::VRS Initialization");
    return a.exec();
}
