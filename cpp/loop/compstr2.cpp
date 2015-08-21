#include <iostream>
#include <string>
using namespace std;
int main(int argc, char *argv[])
{
    string word="?ate";
    for(char ch = 'a'; word != "mate"; ch++)
    {
        std::cout << word << std::endl;
        word[0] = ch;
    }

    std::cout << "After loop ends, word is " << word << std::endl;
    return 0;
}

