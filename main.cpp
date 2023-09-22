#include <iostream>
#include "LinkedList.h"

int main()
{
    LinkedList<int> jan;
    jan.push_back(10);
    jan.push_back(17);
    jan.push_back(18);
    jan.insert_after(5, 10);
    jan.insert_before(3, 18);
    std::cout<<jan << " ";

    std::cout<<std::endl;
    std::cout<<jan.size();
    std::cout<<std::endl;
    std::cout<<jan.size();
    std::cout<<std::endl;
}
