#ifndef WARLOCK_HPP
#define WARLOCK_HPP

#include <iostream>
#include "Aspell.hpp"
#include <map>
#include <utility>

typedef std::map<std::string, ASpell *> SpellBook;
typedef std::map<std::string, ASpell *>::iterator SpellBookIT;

using std::cout;
using std::string;

class Warlock {
		string name;
		string title;
		SpellBook spellBook;

		Warlock();
		Warlock(const Warlock &r);
		Warlock &operator=(const Warlock &r);
	public:
		Warlock(const string &name, const string &title): name(name), title(title) { cout << this->name << ": This looks like another boring day.\n"; };
		~Warlock(void) {
			for (SpellBookIT it = spellBook.begin(); it != spellBook.end(); it++){
				delete &*it->second;
			}
			cout << name << ": My job here is done!\n"; 
		};

		const string &getName(void)const { return name; };
		const string &getTitle(void)const { return title; };

		void	setTitle(const string &title) { this->title = title; };
		void	introduce(void) const { cout << name << ": I am " << name << ", " << title << "!\n"; };
		void	learnSpell(ASpell *newSpell){
			spellBook.insert(std::make_pair(newSpell->getName(), newSpell));
		};
		void	forgetSpell(const string name){
			spellBook.erase(spellBook.find(name));
		};
		void	launchSpell(const string spellName, const ATarget &target){
			ASpell *spell = spellBook.find(spellName)->second;
			spell->launch(target);
		};
};

#endif
