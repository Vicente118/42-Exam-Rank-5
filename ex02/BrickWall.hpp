#ifndef __BRICKWALL__
# define __BRICKWALL__

#include "ATarget.hpp"

class ATarget;

class BrickWall : public ATarget
{
    public:
        BrickWall();
        ~BrickWall();
        ATarget * clone() const;
};

# endif