#ifndef FWOOSH_HPP
#define FWOOSH_HPP
#include "ASpell.hpp"
#include "ATarget.hpp"


class Fwoosh : public ASpell
{
	public:
		Fwoosh( void );
		~Fwoosh();

		virtual Fwoosh* clone( void ) const;
};
#endif
