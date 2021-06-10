#ifndef GAME_H
#define GAME_H
#include "Board.h"
#include "Piece.h"
#include "windows.h" 
#include <conio.h>
#include <iostream>
#include <vector>

/*
06.06.2021:
wypisywanie tabeli
wst�pny play
10.06.2021 - wst�pne sterowanie klawiszami ads, wst�pny chceck

*/

class game
	:protected Board
{
private:
	int x = 0;
	//wynik
	int score = 0;
	//xx i yy "�rodek planszy" do ustawiania klock�w
	int xx = 0;
	int yy = 10;
	
protected:
	std::vector<Piece*> pieces; //trzeba posprzatac. 

public:
	game();
	~game();
	void play();
	virtual void draw_board();
	void print_piece();
	bool check(int xx, int yy);
	bool rotate();
	virtual void controls(); //cin odpada, wzi��-> getch

};

#endif