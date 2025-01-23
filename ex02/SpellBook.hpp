#ifndef __SPELLBOOK__
# define __SPELLBOOK__

# include <iostream>
# include <string>
# include <map>
# include <algorithm>
# include "ASpell.hpp"

class SpellBook 
{
    public:
        SpellBook();
        ~SpellBook();

        void learnSpell(ASpell *);
        void forgetSpell(std::string const &);
        ASpell * createSpell(std::string const &);

    private:
        SpellBook(const SpellBook & ref);
        SpellBook & operator=(const SpellBook & ref);
        std::map<std::string, ASpell *> spellBook;
};

#endif