#ifndef SAVEFILE_H
#define SAVEFILE_H

#include <QObject>
#include <QFile>

class SaveFile : public QObject
{
    Q_OBJECT
public:
    explicit SaveFile(QObject *parent = 0);
    SaveFile(QString fileName);
    virtual ~SaveFile();
signals:

private slots:
    void saveRealtimeData(QString);

private:
    QFile *file;
    QString fileName_;
};

#endif // SAVEFILE_H
