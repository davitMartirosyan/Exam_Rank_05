#ifndef ATARGET_HPP
#define ATARGET_HPP
#include <iostream>
#include <string>
#include "ASpell.hpp"

class ASpell;

class ATarget
{
	protected:
		std::string type;
	public:
		ATarget( void );
		ATarget(const ATarget& op);
		ATarget& operator=(const ATarget& op);
		virtual ATarget* clone( void ) const = 0;
		std::string const &getType( void ) const;
		virtual ~ATarget();
		ATarget(std::string const &t);
		void getHitBySpell(ASpell const &spell) const;
};

#endif
