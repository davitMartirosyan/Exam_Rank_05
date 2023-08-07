#include "Warlock.hpp"

Warlock::Warlock( void ){}
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

Warlock::Warlock(std::string const &n, std::string const &t)
{
	name = n;
	title = t;
	std::cout << name << ": This looks like another boring day." << std::endl;
}

std::string const &Warlock::getName( void ) const
{
	return (this->name);
}

std::string const &Warlock::getTitle( void ) const
{
	return (this->title);
}

void Warlock::setTitle(std::string const &t)
{
	this->title = t;
}

void Warlock::introduce( void ) const
{
	std::cout << name << ": I am " << name << ", " << title << "!" << std::endl;
}


