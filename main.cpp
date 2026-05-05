#include "cli.h"

int main()
{
	InitScr _src_init;

	_src_init.init_ncurses();
	ft_start_print_in_screen();
	_src_init.destroy_ncurses();
	std::cout << "exiting !" << std::endl;
	return 0;
}
