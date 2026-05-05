#include "cli.h"

// TODO: split this to functions and handle the movement

void	ft_start_print_in_screen()
{
	int	c;
	int	line = 1;
	std::map<int, int>	_place;

	printw("1   ");
	_place[0] = 4;
	_place[1] = 4;
	while (1)
	{
		c = getch();
		if (c == 27)
		{
			break ;
		}
		else if (c == 8 || c == 127 || c == KEY_BACKSPACE)
		{
			if (_place[line] > _place[0])
			{
				_place[line]--;
				move(line - 1, _place[line]);
				delch();
			}
			else if (line > 1)
			{
				deleteln();
				line--;
				move(line - 1, _place[line]);
			}
		}
		else if (c == '\n')
		{
			addch(c);
			line++;
			_place[line] = _place[0]; 
			printw("%d   ", line);
		}
		else if (std::isprint(c))
		{
			_place[line]++;
			addch(c);
		}
	}
}
