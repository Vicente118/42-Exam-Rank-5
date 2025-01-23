#ifndef __WARLOCK__
# define __WARLOCK__

# include <iostream>
# include <string>

class Warlock
{
    public :
        Warlock(std::string name, std::string title);
        ~Warlock();

        std::string getName() const;
        std::string getTitle() const;

        void        setTitle(std::string title);
        
        void        introduce() const;
    private :
        Warlock();
        Warlock(const Warlock & ref);
        Warlock     operator=(const Warlock & ref);

        std::string name;
        std::string title;

};


#endif