#include "ASpell.hpp"

ASpell::ASpell( void )
{

}

ASpell::ASpell(const ASpell& op)
{
	name = op.name;
	effects = op.effects;
}

ASpell& ASpell::operator=(const ASpell& op)
{
	if (this != &op)
	{
		name = op.name;
		effects = op.effects;
	}
	return (*this);
}

ASpell::~ASpell()
{

}

ASpell::ASpell(std::string const &n, std::string const &e)
{
	name = n;
	effects = e;
}

std::string const &ASpell::getName( void ) const
{
	return (name);
}

std::string const &ASpell::getEffects( void ) const
{
	return (effects);
}

void ASpell::launch(ATarget const &tar)
{
	std::cout << "stex el eka" << std::endl;
	tar.getHitBySpell(*this);
}
