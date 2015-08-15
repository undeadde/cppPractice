#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
    char ch = 'M';
    int i = ch;
    std::cout << "The ASCII code for " << ch << "is " << i << std::endl;

    std::cout << "Add one to the character code:" << std::endl;
    ch += 1;
    i = ch;
    std::cout << "The ASCII code for " << ch << "is " << i << std::endl;

    std::cout << "Displaying char ch using cout.put(ch): ";
    cout.put(ch);

    cout.put('!');
    cout << endl << "Done" << endl;
    return 0;
}
