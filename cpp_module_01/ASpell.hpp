#ifndef ASPELL_HPP
#define ASPELL_HPP
#include "ATarget.hpp"
#include <iostream>
#include <string>

class ATarget;

class ASpell
{
	private:
		std::string name;
		std::string effects;
	public:
		ASpell( void );
		ASpell(std::string const &n, std::string const &e);
		ASpell(const ASpell& op);
		ASpell& operator=(const ASpell& op);
		virtual ~ASpell();
		virtual ASpell* clone( void ) const = 0;
		std::string const &getName( void ) const;
		std::string const &getEffects( void ) const;
		void launch(ATarget const &tar);
};

#endif
