#include <iostream>
int main(int argc, char *argv[])
{
    using namespace std;
    int n;

    std::cout << "enter numbers in the range 1-10 to find "<< std::endl;
    std::cout << "my favorite number" << std::endl;
    do{
        cin >> n;
    }while(n != 7);
    std::cout << "Yes, 7 is my favorite." << std::endl;
    return 0;
}
