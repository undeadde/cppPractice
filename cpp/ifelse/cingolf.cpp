#include <iostream>
const int Max = 5;
using namespace std;

int main(int argc, char *argv[])
{
    int golf[Max];
    std::cout << "Please enter your golf scores." << std::endl;
    std::cout << "You must enter " << Max << " rounds." << std::endl;

    int i;
    for(i=0; i<Max; i++)
    {
        std::cout << "round #" << i+1 << std::endl;
        while(!(cin>>golf[i]))
        {
            cin.clear();
            while(cin.get() != '\n')
            {
                continue;
            }
            std::cout << "Please enter a number: " << std::endl;
        }
    }

    double total = 0.0;

    for(i=0; i<Max; i++)
    {
        total += golf[i];
    }
    std::cout << total/Max << " = average score " << Max  << " rounds"<< std::endl;
    return 0;
}
