#include "Fwoosh.hpp"

Fwoosh::Fwoosh( void ) : ASpell("Fwoosh", "fwooshed")
{

}

Fwoosh::~Fwoosh()
{

}

Fwoosh* Fwoosh::clone( void ) const
{
	Fwoosh* f = new Fwoosh();
	return (f);
}
