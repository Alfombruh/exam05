#ifndef SPELLBOOK_HPP
#define SPELLBOOK_HPP


#include "Aspell.hpp"
#include "Fireball.hpp"
#include "Fwoosh.hpp"
#include "Polymorph.hpp"
#include <iostream>
#include <map>
#include <utility>

typedef std::map<std::string, ASpell *> Book;
typedef std::map<std::string, ASpell *>::iterator BookIT;

using std::cout;
using std::string;

class SpellBook{
    private:
        Book spellBook;  

        SpellBook(const SpellBook &r){ *this = r; };
        SpellBook &operator=(const SpellBook &r){
            spellBook = r.spellBook;
            return *this;
        }
    public:
        SpellBook(){};
        ~SpellBook(){
            for (BookIT it = spellBook.begin(); it != spellBook.end(); it++)
				delete &*it->second;
        };

        void	learnSpell(ASpell *newSpell){ spellBook.insert(std::make_pair(newSpell->getName(), newSpell)); };
		void	forgetSpell(const string name){ spellBook.erase(spellBook.find(name)); };
        ASpell  *createSpell(string const &spell){
            if (spell == "Fireball")
                return new Fireball;
            else if (spell == "Polymorph")
                return new Polymorph;
            else if (spell == "Fwoosh")
                return new Fwoosh;
            else
                return NULL;
        };
};

#endif