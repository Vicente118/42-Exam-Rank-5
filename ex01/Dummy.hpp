#ifndef __DUMMY__
# define __DUMMY__

#include "ATarget.hpp"

class ATarget;

class Dummy : public ATarget
{
    public:
        Dummy();
        ~Dummy();
        ATarget * clone() const;
};

#endif