#include "Dummy.hpp"

Dummy::Dummy( void ) : ATarget("Target Practice Dummy")
{

}

Dummy::~Dummy()
{

}

Dummy* Dummy::clone( void ) const
{
	Dummy* d = new Dummy();
	return (d);
}
