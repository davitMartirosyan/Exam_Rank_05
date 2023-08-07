#ifndef DUMMY_HPP
#define DUMMY_HPP
#include "ATarget.hpp"
#include <iostream>
#include <string>

class Dummy : public ATarget
{
	public:
		Dummy( void );
		~Dummy();
		virtual Dummy* clone( void ) const;
};

#endif
