#include "SpellBook.hpp"

SpellBook::SpellBook() {}

SpellBook::~SpellBook() {}

void SpellBook::learnSpell(ASpell * spell)
{
    if (spell)
        spellBook[spell->getName()] = spell->clone();
}

void SpellBook::forgetSpell(std::string const & ref)
{
    if (spellBook.count(ref) == 0)
        spellBook.erase(spellBook.find(ref));
}

ASpell * SpellBook::createSpell(std::string const & ref)
{
    ASpell * tmp = NULL;

    if (spellBook.count(ref) > 0)
        tmp = spellBook[ref];
    return tmp;
}