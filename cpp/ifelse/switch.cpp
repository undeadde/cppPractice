#include <iostream>
using namespace std;
void showmenu();
void report();
void comfort();
int main(int argc, char *argv[])
{
    showmenu();
    int choice;
    cin >> choice;
    while(choice != 5)
    {
        switch(choice)
        {
        case 1:
            std::cout << "\a" << std::endl;
            break;
        case 2:
            report();
            break;
        case 3:
            std::cout << "The boss was in all day." << std::endl;
            break;
        case 4:
            comfort();
            break;
        default:
            std::cout << "That's not a choice." << std::endl;
        }
        showmenu();
        cin >> choice;
    }
    std::cout << "Bye!" << std::endl;
    return 0;
}
void showmenu()
{
    std::cout << "Please enter 1,2,3,4 or 5 " << std::endl;
    std::cout << "1) alarm         2)report" << std::endl;
    std::cout << "3) alibi           4)comfort" << std::endl;
    std::cout << "5) quit" << std::endl;
}

void report()
{
    cout << "It's been an excellent week for business." << endl;
}
void comfort()
{
    std::cout << "Your employees" << std::endl;
}