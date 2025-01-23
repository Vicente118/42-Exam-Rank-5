#include "ASpell.hpp"

ASpell::ASpell(std::string name, std::string effects) : name(name), effects(effects) {}

ASpell::ASpell(const ASpell & ref)
{
    this->name    = ref.name;
    this->effects = ref.effects;
}

ASpell & ASpell::operator=(const ASpell & ref)
{
    if (this != &ref)
    {   
        this->name    = ref.name;
        this->effects = ref.effects;
    }
    return *this;
}

ASpell::~ASpell() {}

void ASpell::launch(const ATarget & target) const
{
    target.getHitBySpell(*this);
}


std::string ASpell::getName() const { return name; }

std::string ASpell::getEffects() const { return effects; }