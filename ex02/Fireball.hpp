#ifndef __FIREBALL__
# define __FIREBALL__

# include "ASpell.hpp"

class ASpell;

class Fireball : public ASpell
{
    public:
        Fireball();
        ~Fireball();
        ASpell * clone() const;

};

#endif