#ifndef TARGETGENERATOR_HPP
#define TARGETGENERATOR_HPP
#include "ASpell.hpp"
#include "ATarget.hpp"
#include <map>

class TargetGenerator
{
	private:
		TargetGenerator(const TargetGenerator& op);
		TargetGenerator& operator=(const TargetGenerator& op);

	public:
		TargetGenerator( void );
		~TargetGenerator();
		std::map<std::string, ATarget*> book;
		void learnTargetType(ATarget* tar);
		void forgetTargetType(std::string const &s);
		ATarget* createTarget(std::string const &s);
};

#endif
