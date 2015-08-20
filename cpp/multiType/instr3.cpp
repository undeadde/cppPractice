#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
    const int ArSize = 20;
    char name[ArSize];
    char dessert[ArSize];

    std::cout << "Enter your name:" << std::endl;
    cin.get(name, ArSize).get();
    std::cout << "Enter your favorite dessert: " << std::endl;
    cin.get(dessert, ArSize).get();
    std::cout << "I have some delicious " << dessert;
    std::cout << " for your, " << name  << std::endl;

    return 0;
}
