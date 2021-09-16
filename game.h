#ifndef GAME_H
#define GAME_H
#include "Board.h"
#include "Piece.h"
#include "windows.h" 
#include <conio.h>
#include <iostream>
#include <vector>


class game
	:protected Board
{
private:
	//wynik
	int score = 0;
	//xx i yy "œrodek planszy" do ustawiania klocków
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
	virtual void controls(); //cin odpada, wzi¹æ-> getch

};

#endif