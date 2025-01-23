#include "ATarget.hpp"

ATarget::ATarget(std::string type) : type(type) {}

ATarget::ATarget(const ATarget & ref)
{
    this->type = ref.type;
}

ATarget & ATarget::operator=(const ATarget & ref)
{
    if (this != &ref)
        this->type = ref.type;

    return *this;
}

ATarget::~ATarget() {}

std::string ATarget::getType() const { return type; }

void ATarget::getHitBySpell(ASpell const & spell) const
{
    std::cout << type << " has been " << spell.getEffects() << "!" << std::endl;
}