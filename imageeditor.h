#ifndef IMAGEEDITOR_H
#define IMAGEEDITOR_H

#include <QMainWindow>

namespace Ui {
class ImageEditor;
}

class ImageEditor : public QMainWindow
{
    Q_OBJECT

public:
    explicit ImageEditor(QWidget *parent = 0);
    ~ImageEditor();

private:
    Ui::ImageEditor *ui;
};

#endif // IMAGEEDITOR_H
