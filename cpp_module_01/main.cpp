#include "Warlock.hpp"
#include "Aspell.hpp"
#include "Dummy.hpp"
#include "Fwoosh.hpp"

int main()
{
    Warlock richard("Richard", "the Titled");

    Dummy bob;
    Fwoosh *fwoosh = new Fwoosh;
    
    richard.learnSpell(fwoosh);
    
    richard.introduce();
    richard.launchSpell("Fwoosh", bob);
    return (0);
}