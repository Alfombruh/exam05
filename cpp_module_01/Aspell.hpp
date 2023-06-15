#ifndef ASPELL_HPP
#define ASPELL_HPP

#include <iostream>
#include "ATarget.hpp"

using std::string;
using std::cout;

class ASpell{
	protected:
		string name;
		string effects;

	public:
		ASpell(void){};
		ASpell(const ASpell &r){ *this = r; };
		ASpell &operator=(const ASpell &r)
		{
			name = r.name;
			effects = r.effects;
			return *this;
		};
		ASpell(const string &name, const string &effects):name(name), effects(effects){};
		virtual ~ASpell(void){};

		const string &getName(void)const { return name; };
		const string &getEffects(void)const { return name; };

		virtual ASpell  *clone(void) const = 0;
		void launch(const ATarget &target){ target->getHitBySpell(*this); };
};

#endif