#ifndef __POLYMORPH__
# define __POLYMORPH__

# include "ASpell.hpp"

class ASpell;

class Polymorph : public ASpell
{
    public:
        Polymorph();
        ~Polymorph();
        ASpell * clone() const;

};

#endif