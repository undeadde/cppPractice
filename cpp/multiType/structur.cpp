#include <iostream>
using namespace std;
struct inflatable
{
    char name[20];
    float volume;
    double price;
};
int main(int argc, char *argv[])
{
    inflatable guest = {"Glorious Gloria", 1.99, 39.32};
    inflatable pal = {"Audacious Arthur", 3.12, 32.99};

    cout << "Expand your guest list with " << guest.name;
    std::cout << " and " << pal.name << std::endl;

    std::cout << "You can have both for $" << guest.price + pal.price << "!" << std::endl;
    return 0;
}
