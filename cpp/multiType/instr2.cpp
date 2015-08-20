#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
    const int ArSize = 20;
    char name[ArSize];
    char dessert[ArSize];

    std::cout << "Enter your name:\n" << std::endl;
    cin.getline(name, ArSize);
    std::cout << "Enter your favorite dessert:\n" << std::endl;
    cin.getline(dessert, ArSize);
    cout << "I have some delicious " << dessert;
    cout << " for you, " << name << "." << endl;
    return 0;
}
