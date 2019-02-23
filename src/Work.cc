#include <ctime>
#include <iomanip>
#include <iostream>


#include "Work.h"

Work::Work(std::string title, std::string start_time, std::string end_time)
    : title(title),
    start_time(start_time),
    end_time(end_time)
{
    std::cout << "Create new work ..." << std::endl;
    std::cout << "Work title is: " << this->title << std::endl;
    std::cout << "Work start time: " << this->start_time << std::endl;
    std::cout << "Work end time: " << this->end_time << std::endl;
}

Work::~Work()
{
    std::cout << "Distract new work ..." << std::endl;
}

std::string Work::get_title()
{
    return this->title;
}

std::string Work::get_start_time()
{
    return this->start_time;
}

std::string Work::get_end_time()
{
    return this->end_time;
}
