#include "BrickWall.hpp"

BrickWall::BrickWall( void ) : ATarget("Inconspicuous Red-Brick Wall")
{

}

BrickWall::~BrickWall()
{

}

BrickWall* BrickWall::clone( void ) const
{
	BrickWall* brick = new BrickWall();
	return (brick);
}
