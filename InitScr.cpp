#include "InitScr.hpp"

InitScr::InitScr(void)
{

}

InitScr::~InitScr(void)
{

}

void	InitScr::init_ncurses(void)
{
	initscr();
	noecho();
	keypad(stdscr, true);
}

void	InitScr::destroy_ncurses(void)
{
	endwin();
}
