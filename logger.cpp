/*******************************************************************************
* PROJECT     : SimpleLogger
*
* MODULE      : $Workfile: logger.cpp $  $Revision: 1 $
*
* DESCRIPTION : Logger basic functions
* AUTHOR      : Inderjeet Singh
*
********************************************************************************
#include "logger.h"

Logger::Logger() : m_file("C:/Users/isingh/SimpleLogger/logger.log"),
                  m_stream(&m_file){}

void Logger::CloseFile()
{
    if(m_file.isOpen() == true)
    {
        m_file.close();
    }
}
void Logger::OpenFile()
{
    m_file.open(QIODevice::WriteOnly);
}
void Logger::Log(QString level, QString str)
{
    m_stream << format(level, str) << endl;
}
QString Logger::format(QString& level, QString &log)
{
    return QString("%1 %2 %3")
                   .arg(QDateTime::currentDateTime().toString("yy-MM-dd hh:mm:ss.zzz"))
                   .arg(level)
                   .arg(log);
}
