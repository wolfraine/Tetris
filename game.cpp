#include "game.h"

game::game()
{

}

game::~game()
{
	for (auto point : pieces)
	{
		delete point;
	}
}

void game::play()
{
	//std::vector<Piece*> pieces;
	pieces.push_back(Piece::createRandomPiece());
	//pieces[0];
	for (;;) {
		draw_board();
		//Sleep(400);
		controls();
		
	}
}


void game::draw_borad()
{
	system("cls");
	//petla sprawdza czy pozycja z vektora zgadza siê z pozycj¹ w tablicy
	for (int i = 0; i < height; i++) {
		for (int j = 0; j < witdh; j++) {

			std::cout << main_tab[i][j].type << ' ';
		}
		std::cout << std::endl;
	}
}

void game::print_piece()
{
}

bool game::check(int xx, int yy)
{
	//if (main_tab[xx][yy].type == 'x' || main_tab[xx][yy].type == 'o') {
	//	return false;
	//}
	//else
	return true;
}

bool game::rotate()
{
	return false;
}

void game::controls()
{
	unsigned char znak;
	znak = _getch();
	//ruch w lewo klawisz a
	if (znak == 97) {
		yy -= 1;
	}
	//ruch w prawo klawisz d
	if (znak == 100) {
		yy += 1;
	}
	//ruch w dó³ klawisz s
	if (znak == 115) {
		xx += 1;
	}
	//pieces.createRandomPiece(xx,yy);
	//main_tab[xx][yy].type = 'x';//docelowo zmieniæ na obiekt klasy piece


}


