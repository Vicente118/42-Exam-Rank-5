#ifndef __ASPELL__
# define __ASPELL__

# include <iostream>
# include <string>
# include "ATarget.hpp"

class ATarget;

class ASpell
{
    public:
        ASpell(std::string name, std::string effects);
        ASpell(const ASpell & ref);
        ASpell & operator=(const ASpell & ref);
        virtual ~ASpell();

        std::string getName() const;
        std::string getEffects() const;

        virtual ASpell * clone() const = 0;

        void    launch(const ATarget & target) const;

    protected:
        std::string name;
        std::string effects;

    private:
        ASpell();
};

#endif