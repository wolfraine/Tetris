#ifndef BOARD_H
#define BOARD_H
#include "Cell.h"


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
	//friend class game;
};
#endif
