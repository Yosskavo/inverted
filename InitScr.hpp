#ifndef INITSCR_HPP
# define INITSCR_HPP

# include <ncurses.h>

class InitScr
{
	public :
		InitScr(void);
		~InitScr(void);
		void	init_ncurses(void);
		void	destroy_ncurses(void);
};

#endif
