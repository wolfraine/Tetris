#ifndef PIECE_H
#define PIECE_H
#include "Cell.h"
#include <vector>
#include <random>
/*
10.06.2021 - 
przebudowa ca³ej klasy piece, metody zosta³y zmodyfikowane,
dodano vektory z dwoma klockami wybieranymi losowo
*/

enum piece_type {
	t_piece,
	s_piece,
	types
};

class Piece
{
private:
	std::vector<cell> body;

protected:

public:
	Piece(std::vector<cell> body);
	void fall_down();
	void get_body();
	void move_piece(int move_x, int move_y);
	static Piece* createRandomPiece();

	virtual ~Piece();
	
	friend class game;
};

#endif