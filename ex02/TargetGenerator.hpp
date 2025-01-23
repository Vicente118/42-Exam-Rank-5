#ifndef __TARGETGENERATOR__
# define __TARGETGENERATOR__

# include <iostream>
# include <string>
# include <map>
# include <algorithm>
# include "ATarget.hpp"

class TargetGenerator
{
    public :
        TargetGenerator();
        ~TargetGenerator();

        void learnTargetType(ATarget *);
        void forgetTargetType(std::string const &);
        ATarget * createTarget(std::string const &);
    private :
        TargetGenerator(const TargetGenerator & ref);
        TargetGenerator & operator=(const TargetGenerator & ref);
        std::map<std::string, ATarget *> targets;
};

#endif