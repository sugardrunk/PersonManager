#ifndef FILEMANAGER_H
#define FILEMANAGER_H

#include <gui.h>


class FileManager : Gui
{

public:
    FileManager();
    ~FileManager();

    void saveValues(QString q);
    QStringList loadValues();

    QString writeValues();
    void readValues();

    QString getFileName();

private:
    QStringList personList;
    QStringList loadedList;

    QString loadFile;
};

#endif // FILEMANAGER_H
