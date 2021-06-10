#ifndef BOARD_H
#define BOARD_H
#include "Cell.h"
/*
06.06.2021: 
	przeniesienie zmiennych wysokoœæ i szerokoœæ tabeli -> brak dostêpu do zmiennych do rysowania tabeli
	konstruktor, destruktor tablicy, rysowanie krawêdzi
*/

class Board
{
private:

protected:
	int witdh = 20; //szerokoœæ tabeli
	int height = 30; 	//wysokoœæ tabeli

	//g³ówna tabela
	cell** main_tab;

public:
	Board();
	void remove_row();
	virtual ~Board();
	friend class game;
};
#endif
