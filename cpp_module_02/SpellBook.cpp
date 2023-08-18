#include "SpellBook.hpp"

SpellBook::SpellBook(const SpellBook& op)
{
	(void)op;
}

SpellBook& SpellBook::operator=(const SpellBook& op)
{
	if (this != &op)
	{

	}
	return (*this);
}

SpellBook::~SpellBook()
{
	std::map<std::string, ASpell*>::iterator it = book.begin();
	while (it != book.end())
	{
		delete it->second;
		it++;
	}
	book.clear();
}

SpellBook::SpellBook( void )
{

}

void SpellBook::learnSpell(ASpell* spell)
{
	if (spell)
	{
		book.insert(std::pair<std::string, ASpell*>(spell->getName(), spell->clone()));
	}
}

void SpellBook::forgetSpell(std::string const &s)
{
	std::map<std::string, ASpell*>::iterator it = book.find(s);
	if (it != book.end())
	{
		delete it->second;
		book.erase(s);
	}
}

ASpell* SpellBook::createSpell(std::string const &s)
{
	std::map<std::string, ASpell*>::iterator it = book.find(s);
	if (it != book.end())
	{
		return (it->second);
	}
	return (NULL);
}
