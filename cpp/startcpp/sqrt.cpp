#include <iostream>
#include <cmath>

int main()
{
    using namespace std;

    double area;
    std::cout << "Enter the floor area, in square feet, of your home:" << std::endl;
    cin >> area;
    double side;
    side = sqrt(area);
    std::cout << "That is the equivalent of a square " << side << " feet to the side." << std::endl;
    std::cout <<  "How fascinating!" << std::endl;

    return 0;
}

