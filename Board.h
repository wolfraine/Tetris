#ifndef BOARD_H
#define BOARD_H
#include "Cell.h"


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
	//friend class game;
};
#endif
