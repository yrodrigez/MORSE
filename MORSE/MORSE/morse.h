#ifndef MORSE_H
#define MORSE_H

#include <QtWidgets/QMainWindow>
#include "ui_morse.h"

class MORSE : public QMainWindow
{
	Q_OBJECT

public:
	MORSE(QWidget *parent = 0);
	~MORSE();

private:
	Ui::MORSEClass ui;
};

#endif // MORSE_H
