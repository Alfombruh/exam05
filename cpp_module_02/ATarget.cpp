#include "ATarget.hpp"
#include "Aspell.hpp"

void ATarget::getHitBySpell(const ASpell &spell)const{cout << type << " has been " << spell.getEffects() << "!\n"; };