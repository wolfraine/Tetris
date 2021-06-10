#include "Cell.h"

cell::cell()
{
}

cell::cell(int x, int y, char type)
{
	this->x = 0;
	this->y = 0;
	this->type = ' ';
}

void cell::set_x(int x)
{
	this->x = x;
}
void cell::set_y(int y) 
{
	this->y = y;
}

void cell::set_type(char type)
{
	this ->type = type;
}

void cell::move_cell(int m_x, int m_y)
{
	x = x + m_x;
	y = y + m_y;
}

cell::~cell()
{
}
