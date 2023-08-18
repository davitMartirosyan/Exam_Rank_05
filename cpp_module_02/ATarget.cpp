#include "ATarget.hpp"

ATarget::ATarget( void )
{

}

ATarget::ATarget(const ATarget& op)
{
	type = op.type;
}

ATarget& ATarget::operator=(const ATarget& op)
{
	if (this != &op)
	{
		type = op.type;
	}
	return (*this);
}

ATarget::~ATarget()
{

}

ATarget::ATarget(std::string const &t)
{
	type = t;
}

std::string const &ATarget::getType( void ) const
{
	return (type);
}

void ATarget::getHitBySpell(ASpell const &spell) const
{
	std::cout << type << " has been " << spell.getEffects() << "!" << std::endl;
}
