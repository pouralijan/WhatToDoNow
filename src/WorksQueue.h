#pragma once

#include <deque>

#include "Work.h"

class WorksQueue
{
    public:
        WorksQueue();
        ~WorksQueue();
        bool add_work(Work* work);
        Work* get_next();
        bool show_works_list();
    private:
        std::deque<Work*> works_queue;
};
