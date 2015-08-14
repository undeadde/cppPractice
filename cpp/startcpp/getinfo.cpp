#include <iostream>
int main()
{
    using namespace std;

    int carrots;

    cout << "How many carrots do you have?" << endl;
    cin >> carrots;
    std::cout << "Here are two more. " << std::endl;
    std::cout << "Now you have " << carrots+2 << " carrots." << std::endl;
    return 0;
}
