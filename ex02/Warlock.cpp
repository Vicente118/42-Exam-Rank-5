#include "Warlock.hpp"

Warlock::Warlock(std::string name, std::string title) : name(name), title(title)
{
    std::cout << name << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock()
{
    std::cout << name << ": My job here is done!" << std::endl;
}

void Warlock::introduce() const
{
    std::cout << name << ": I am " << name << ", " << title << "!" << std::endl;
}

std::string Warlock::getName() const { return name; }

std::string Warlock::getTitle() const { return title; }

void        Warlock::setTitle(std::string title) { this->title = title; }


void Warlock::learnSpell(ASpell * spell)
{
    book.learnSpell(spell);
}

void Warlock::forgetSpell(std::string spell)
{
    book.forgetSpell(spell);
}

void Warlock::launchSpell(std::string spell, ATarget & target)
{
    if (book.createSpell(spell))
        book.createSpell(spell)->launch(target);
}

