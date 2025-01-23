#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator() {}

TargetGenerator::~TargetGenerator() {}

void TargetGenerator::learnTargetType(ATarget * target)
{
    if (target)
        targets[target->getType()] = target;
}

void    TargetGenerator::forgetTargetType(std::string const & ref)
{
    if (targets.count(ref) == 0)
        return;
    targets.erase(targets.find(ref));
}

ATarget * TargetGenerator::createTarget(std::string const & ref)
{
    ATarget * tmp = NULL;

    if (targets.count(ref) > 0)
        tmp = targets[ref];
    return tmp;
}