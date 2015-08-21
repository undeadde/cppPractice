#include <iostream>
#include <cstring>

using namespace std;
int main(int argc, char *argv[])
{
    char word[5] = "?ate";
    for(char ch = 'a'; strcmp(word, "mate"); ch++)
    {
        std::cout << word << std::endl;
        word[0] = ch;
    }
    std::cout << "After loop ends, word is " << word << std::endl;
    return 0;
}
