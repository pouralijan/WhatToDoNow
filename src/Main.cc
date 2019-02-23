#include <iostream>

#include "Work.h"
#include "WorksQueue.h"


int main()
{
    Work* w0 = new Work("Test0", "08:00", "09:00");
    Work* w1 = new Work("Test1", "09:00", "10:00");
    Work* w2 = new Work("Test2", "10:00", "11:00");
    Work* w3 = new Work("Test3", "11:00", "12:00");

    WorksQueue wq = WorksQueue();
    wq.add_work(w0);
    wq.add_work(w1);
    wq.add_work(w2);
    wq.add_work(w3);

    wq.show_works_list();


    std::cout << "=========================" << std::endl;
    std::cout << wq.get_next()->get_title() << std::endl;
    std::cout << wq.get_next()->get_title() << std::endl;
    std::cout << wq.get_next()->get_title() << std::endl;
    std::cout << wq.get_next()->get_title() << std::endl;
    std::cout << "=========================" << std::endl;

	return 0;
}
