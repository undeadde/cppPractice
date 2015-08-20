#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
    const int ArSize = 20;
    char name[ArSize];
    char dessert[ArSize];

    std::cout << "Enter your name:\n" << std::endl;
    cin >> name;
    cout << "Enter your favorite dessert:\n";
    cin >> dessert;
    std::cout << "I have some delicious " << dessert << " for you, " << name << std::endl;
    return 0;
}
