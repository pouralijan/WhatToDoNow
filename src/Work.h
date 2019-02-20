#pragma once
#include <string>

class Work
{
    public:
        Work();
        ~Work();

        Work(std::string start_time);
        
    private:
        std::string start_time;
        std::string end_time;
};
