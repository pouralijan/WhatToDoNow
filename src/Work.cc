#include <iostream>
#include <ctime>
#include <chrono>
#include <iomanip>


#include "Work.h"

Work::Work()
{
    std::cout << "Create new work ..." << std::endl;
}

Work::~Work()
{
    std::cout << "Distract new work ..." << std::endl;
}
