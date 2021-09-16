#ifndef PIECE_H
#define PIECE_H
#include "Cell.h"
#include <vector>
#include <random>


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
	//static Piece get_body();
	std::vector<cell> getbody() { return body; };
	void move_piece(int move_x, int move_y);
	static Piece* createRandomPiece(int xx, int yy);

	virtual ~Piece();
	
	friend class game;
};

#endif