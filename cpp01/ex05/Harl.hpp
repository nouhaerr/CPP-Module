#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>
#include <string>

class Harl {

	private:
		void			debug(void);
		void			info(void);
		void			warning(void);
		void			error(void);
		typedef void	(Harl::*harlFunct)(void);

	public:
		Harl(void);
		~Harl();
		void	complain(std::string level);
};

#endif
