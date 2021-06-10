#include <iostream>
#include "Board.h"

//rysowanie pustej planszy
Board::Board()
{
	main_tab = new cell * [height];
	for (int i = 0; i < height; i++)
	{
		main_tab[i] = new cell[witdh];
	}
	for (int k = 0; k < height; k++) {
		for (int j = 0; j < witdh; j++) {
			if (j == 0 || j == (witdh - 1)) {
				main_tab[k][j].type = '#';
			}
		}
		if (k == (height - 1)) {
			for (int i = 0; i < witdh; i++) {
				main_tab[k][i].type = '#';
			}
		}
	}
}


void Board::remove_row()
{
}

Board::~Board()
{
	if (main_tab)
	{
		for (int i = 0; i < height; i++)
		{
			delete[] main_tab[i];
		}
		delete main_tab;
	}
}

//void Board::init_x()
//{
//	main_tab[0][10].type = 'x';
//}
