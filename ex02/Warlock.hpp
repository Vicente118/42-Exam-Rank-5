#ifndef __WARLOCK__
# define __WARLOCK__

# include <iostream>
# include <string>
# include <map>
# include <algorithm>
# include "ASpell.hpp"
# include "SpellBook.hpp"

class Warlock
{
    public :
        Warlock(std::string name, std::string title);
        ~Warlock();

        std::string getName() const;
        std::string getTitle() const;

        void        setTitle(std::string title);
        
        void        introduce() const;

        void        learnSpell(ASpell * spell);
        void        forgetSpell(std::string spell);
        void        launchSpell(std::string spell, ATarget & target);

    private :
        Warlock();
        Warlock(const Warlock & ref);
        Warlock     &operator=(const Warlock & ref);

        std::string name;
        std::string title;
        SpellBook   book;
        std::map<std::string, ASpell * > spellBook;
};


#endif