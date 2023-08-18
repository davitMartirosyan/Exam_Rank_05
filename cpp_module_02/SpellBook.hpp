#ifndef SPELLBOOK_HPP
#define SPELLBOOK_HPP
#include "ASpell.hpp"
#include "ATarget.hpp"
#include <map>

class SpellBook
{
	private:
		SpellBook(const SpellBook& op);
		SpellBook& operator=(const SpellBook& op);
		std::map<std::string, ASpell*> book;
	public:
		SpellBook( void );
		~SpellBook();

		void learnSpell(ASpell* spell);
		void forgetSpell(std::string const &s);
		ASpell* createSpell(std::string const &s);
};

#endif
