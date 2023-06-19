#ifndef WARLOCK_HPP
#define WARLOCK_HPP

#include <iostream>
#include "Aspell.hpp"

using std::cout;
using std::string;

class Warlock {
		string name;
		string title;

		Warlock();
		Warlock(const Warlock &r);
		Warlock &operator=(const Warlock &r);
	public:
		Warlock(const string &name, const string &title): name(name), title(title){
			cout << this->name << ": This looks like another boring day.\n";
		}
		~Warlock(void) { cout << name << ": My job here is done!\n"; };

		const string &getName(void)const { return name; };
		const string &getTitle(void)const { return title; };

		void	setTitle(const string &title) { this->title = title; };
		void	introduce(void) const { cout << name << ": I am " << name << ", " << title << "!\n"; };
		void	learnSpell(ASpell *newSpell){};
		void	forgetSpell(const string name){};
		void	launchSpell(const string spellName, const ATarget &target){};
};

#endif
