#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
    char ch;
    cin.get(ch);
    int count = 0;
    while(cin.fail() == false)
    {
        cout << ch;
        ++ count;
        cin.get(ch);
    }
    std::cout << endl << count << "characters read." << std::endl;
    return 0;
}
