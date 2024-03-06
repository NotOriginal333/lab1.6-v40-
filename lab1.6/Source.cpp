#include "TimeC.h"
#include <iostream>

int main() {
    TimeC time;

    std::cout << "Enter time:" << std::endl;
    time.Read();
    std::cout << "Initial time:" << std::endl;
    time.Display();

    time.incremHour();
    time.incremMin();
    time.incremSec();

    std::cout << "\nUpdated (++) time:" << std::endl;
    time.Display();

    int n;
    std::cout << "n = "; std::cin >> n;

    time.moreMin(n);
    time.moreSec(n);

    std::cout << "\nUpdated (+n) time:" << std::endl;
    time.Display();

    std::cout << "\nTime as string: " << time.toString() << std::endl;

    return 0;
}
