#ifndef POLYMORPH_HPP
#define POLYMORPH_HPP
#include "ASpell.hpp"

class Polymorph : public ASpell
{
	public:
		Polymorph( void );
		~Polymorph();

		virtual Polymorph* clone( void ) const;
};

#endif
