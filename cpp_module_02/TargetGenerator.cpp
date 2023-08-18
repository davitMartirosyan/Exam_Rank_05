#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator( void )
{

}

TargetGenerator::~TargetGenerator()
{
	std::map<std::string, ATarget*>::iterator it = book.begin();
	while (it != book.end())
	{
		delete it->second;
		it++;
	}
	book.clear();
}

TargetGenerator::TargetGenerator(const TargetGenerator& op)
{
	(void)op;
}

TargetGenerator& TargetGenerator::operator=(const TargetGenerator& op)
{
	if (this != &op)
	{

	}
	return (*this);
}

void TargetGenerator::learnTargetType(ATarget* tar)
{
	if (tar)
	{
		book.insert(std::pair<std::string, ATarget*>(tar->getType(), tar->clone()));
	}
}

void TargetGenerator::forgetTargetType(std::string const &s)
{
	std::map<std::string, ATarget*>::iterator it = book.find(s);
	if (it != book.end())
	{
		delete it->second;
		book.erase(s);
	}
}

ATarget* TargetGenerator::createTarget(std::string const &s)
{
	std::map<std::string, ATarget*>::iterator it = book.find(s);
	if (it != book.end())
	{
		return (it->second);
	}
	return (NULL);
}
