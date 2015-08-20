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
    inflatable * ps = new inflatable;
    std::cout << "enter name of inflatable item:" << std::endl;
    cin.get(ps->name, 20);
    std::cout << "enter volume in cubic feet: " << std::endl;
    cin >> (*ps).volume;
    std::cout << "enter price:" << std::endl;
    cin >> ps->price;
    std::cout << "name: " <<(*ps).name << std::endl;
    std::cout << "volume: " <<(*ps).volume << std::endl;
    std::cout << "price: " <<(*ps).price << std::endl;

    delete ps;

    return 0;
}
