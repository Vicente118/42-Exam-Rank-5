#ifndef __FWOOSH__
# define __FWOOSH__

# include "ASpell.hpp"

class ASpell;

class Fwoosh : public ASpell
{
    public:
        Fwoosh();
        ~Fwoosh();
        ASpell * clone() const;

};

#endif