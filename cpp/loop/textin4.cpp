#include <iostream>
#include <fstream>

using namespace std;
int main(int argc, char *argv[])
{
    int ch;
    int count = 0;

    while(ch = cin.get() != EOF)
    {
        cout.put(char(ch));
        ++count;
    }

    cout << endl << count << " characters read.";
    
    return 0;
}
