#ifndef WARLOCK_HPP
#define WARLOCK_HPP
#include <iostream>
#include <string>

class Warlock
{
	private:
		std::string name;
		std::string title;
		Warlock( void );
		Warlock(const Warlock& op);
		Warlock& operator=(const Warlock& op);
	public:
		Warlock(std::string const &n, std::string const &t);
		std::string const &getName( void ) const;
		std::string const &getTitle( void ) const;
		void setTitle(std::string const &t);
		~Warlock();
		void introduce( void ) const;
};

#endif
