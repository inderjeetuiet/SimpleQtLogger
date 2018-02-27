#ifndef LOGGER_H
#define LOGGER_H

#include <QObject>
#include <QString>
#include <QFile>
#include <QTextStream>
#include <QDateTime>

class Logger
{
private:
    QFile m_file;
    QTextStream m_stream;
public:
    Logger();
    void OpenFile();
    void CloseFile();
    void Log(QString level, QString str);
    QString format(QString& level,QString& log);
};

typedef QSharedPointer<Logger> LoggerPtr;
#endif // LOGGER_H
