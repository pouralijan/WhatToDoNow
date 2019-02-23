#include <iostream>

#include "WorksQueue.h"

WorksQueue::WorksQueue()
{
    std::cout << "Create WorksList ..." << std::endl;
}

WorksQueue::~WorksQueue()
{
    std::cout << "End of WorksList life ..." << std::endl;
}

bool WorksQueue::add_work(Work* work)
{
    std::cout << "Adding " << work->get_title() << " to WorksList" << std::endl;
    this->works_queue.push_back(work);
    return false;
}

Work* WorksQueue::get_next()
{
    auto work = this->works_queue.front();
    return work;
}

bool WorksQueue::show_works_list()
{
    for(Work* it: this->works_queue)
        std::cout << it->get_title() << std::endl;
    return true;
}
