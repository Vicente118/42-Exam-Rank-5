#ifndef __ATarget__
# define __ATarget__

# include <iostream>
# include <string>
# include "ASpell.hpp"

class ASpell;

class ATarget
{
    public:
        ATarget(std::string type);
        ATarget(const ATarget & ref);
        ATarget & operator=(const ATarget & ref);
        virtual ~ATarget();

        std::string getType() const;

        virtual ATarget * clone() const = 0;

        void getHitBySpell(ASpell const & spell) const;

    protected:
        std::string type;

    private:
        ATarget();

};

#endif