#include "Piece.h"

std::vector<cell> create_SquarePiece(int x, int y) {
	std::vector<cell> body;

	body.push_back({ x + 0, y + 0, 'x' });
	body.push_back({ x + 1, y + 0, 'x' });
	body.push_back({ x + 0, y + 1, 'x' });
	body.push_back({ x + 1, y + 1, 'x' });
	return body;
}
std::vector<cell> createT_Piece(int x, int y) {
	std::vector<cell> body;

	body.push_back({ x + 0, y + 0, 'x' });
	body.push_back({ x - 1, y + 0, 'x' });
	body.push_back({ x + 1, y + 1, 'x' });
	body.push_back({ x + 0, y + 1, 'x' });
	return body;
}

Piece::Piece(std::vector<cell> body) : body(body)
{
}

void Piece::fall_down()
{
}

void Piece::move_piece(int move_x, int move_y)
{
}

Piece::~Piece()
{
}

Piece* Piece::createRandomPiece()
{
	std::vector<cell> body;
	piece_type randomType = piece_type (rand() % types);
	
	switch (randomType) {
	case piece_type::s_piece:
		body = create_SquarePiece(0,10);
		break;
	case piece_type::t_piece:
		body = createT_Piece(0,10);
		break;
	}

	return new Piece{body};
}
