#ifndef BOARD_H
#define BOARD_H
#include "Cell.h"
/*
06.06.2021: 
	przeniesienie zmiennych wysoko�� i szeroko�� tabeli -> brak dost�pu do zmiennych do rysowania tabeli
	konstruktor, destruktor tablicy, rysowanie kraw�dzi
*/

class Board
{
private:

protected:
	int witdh = 20; //szeroko�� tabeli
	int height = 30; 	//wysoko�� tabeli

	//g��wna tabela
	cell** main_tab;

public:
	Board();
	void remove_row();
	virtual ~Board();
	friend class game;
};
#endif
