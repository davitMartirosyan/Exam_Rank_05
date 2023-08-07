#ifndef ATARGET_HPP
#define ATARGET_HPP
#include "ASpell.hpp"
#include <string>
#include <iostream>

class ASpell;

class ATarget
{
	private:
		std::string type;
	public:
		ATarget( void );
		ATarget(std::string const &t);
		ATarget(const ATarget& op);
		ATarget& operator=(const ATarget& op);
		virtual ~ATarget();
		virtual ATarget* clone( void ) const = 0;
		std::string const &getType( void ) const;
		void getHitBySpell(ASpell& spell) const;
};

#endif
