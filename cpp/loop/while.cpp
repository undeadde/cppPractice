#include <iostream>
const int ArSize = 20;
int main(int argc, char *argv[])
{
    using namespace std;

    char name[ArSize];
    cout << "Your first name , please:";
    cin >> name;
    std::cout << "Here is your name, verticalized and Asciiized." << std::endl;

    int i = 0;
    while(name[i] != '\0')
    {
        std::cout << name[i] << ": " << int(name[i]) << std::endl;
        i++;
    }

    return 0;
}
