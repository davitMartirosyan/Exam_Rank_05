#ifndef WARLOCK_HPP
#define WARLOCK_HPP
#include <iostream>
#include <string>
#include <map>
#include "ASpell.hpp"
#include "ATarget.hpp"

class Warlock
{
	private:
		std::string name;
		std::string title;
		Warlock( void );
		Warlock(const Warlock& op);
		Warlock& operator=(const Warlock& op);
		std::map<std::string, ASpell*> library;
	public:
		Warlock(std::string const &n, std::string const &t);
		~Warlock();
		std::string const &getName( void ) const;
		std::string const &getTitle( void ) const;
		void setTitle(std::string const &t);
		void introduce( void ) const;
		void learnSpell(ASpell* spell);
		void forgetSpell(std::string s);
		void launchSpell(std::string s, ATarget& tar);
};

#endif
