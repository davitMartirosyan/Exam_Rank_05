#ifndef ASPELL_HPP
#define ASPELL_HPP
#include <iostream>
#include <string>
#include "ATarget.hpp"

class ATarget;

class ASpell
{
	protected:
		std::string name;
		std::string effects;
	public:
		ASpell( void );
		ASpell(const ASpell& op);
		ASpell& operator=(const ASpell& op);
		ASpell(std::string const &n, std::string const &e);
		virtual ~ASpell();
		std::string const &getName( void ) const;
		std::string const &getEffects( void ) const;
		virtual ASpell* clone( void ) const = 0;
		void launch(ATarget const &tar);
};

#endif
