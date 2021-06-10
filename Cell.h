#ifndef CELL_H
#define CELL_H
/*
09.06.2021 - dodanie set_x, set_y, set_type, move_cell, oraz dopisaie ich deklaracji
19.06.2021 - wygl¹da na wszystko,
*/

class cell
{
private:

protected:
	int x = 0;
	int y = 0;
	char type = ' ';

public:
	cell();
	cell(int x, int y, char type);
	//cell(const cell& cel);   //nie skompiluje siê poni¿ej standartu 2011 (umieœciæ w dokumentacji)
	//cell& operator=(const cell& cell1);
	void set_x(int x); 
	void set_y(int y);
	void set_type(char typ);
	void move_cell(int new_x, int new_y);
	virtual ~cell();

	friend class Board;
	friend class game;
};
#endif