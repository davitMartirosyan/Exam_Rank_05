#include "Warlock.hpp"

Warlock::Warlock( void )
{

}

Warlock::Warlock(std::string const &n, std::string const &t)
{
	name = n;
	title = t;
	std::cout << name << ": This looks like another boring day." << std::endl;
}

Warlock::Warlock(const Warlock& op)
{
	name = op.name;
	title = op.title;
}

Warlock& Warlock::operator=(const Warlock& op)
{
	if (this != &op)
	{
		name = op.name;
		title = op.title;
	}
	return (*this);
}

Warlock::~Warlock()
{
	std::cout << name << ": My job here is done!" << std::endl;
}

std::string const &Warlock::getName( void ) const
{
	return (name);
}

std::string const &Warlock::getTitle( void ) const
{
	return (title);
}

void Warlock::setTitle(std::string const &t)
{
	title = t;
}

void Warlock::introduce( void ) const
{
	std::cout << name << ": I am " << name << ", " << title << "!" << std::endl;
}

void Warlock::learnSpell(ASpell* spell)
{
	book.learnSpell(spell);
}

void Warlock::forgetSpell(std::string s)
{
	book.forgetSpell(s);
}

void Warlock::launchSpell(std::string s, ATarget const & tar)
{
	ATarget  const *t = 0;
	if (t == &tar)
		return;
	ASpell* spell = book.createSpell(s);
	std::cout << "eka" << std::endl;
	if (spell)
	{
		spell->launch(tar);
	}
}
