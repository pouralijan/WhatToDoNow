#pragma once

#include <string>

class Work
{
    public:
        Work(std::string title, std::string start_time, std::string end_time);
        ~Work();
        
        std::string get_title();
        std::string get_start_time();
        std::string get_end_time();
    private:
        std::string title;
        std::string start_time;
        std::string end_time;
};
