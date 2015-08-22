#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
    char ch;
    int spaces = 0;
    int total = 0;
    cin.get(ch);
    while(ch != '.')
    {
        if(ch == ' ')
        {
            ++spaces;
        }
        ++total;
        cin.get(ch);
    }

    std::cout << spaces << " spaces, " << total << " characters total in sentence." << std::endl;
    return 0;
}

