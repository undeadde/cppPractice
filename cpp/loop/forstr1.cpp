#include <iostream>
#include <cstring>
using namespace std;
int main(int argc, char *argv[])
{
    std::cout << "Enter a word: " << std::endl;
    string word;
    cin >> word;
    for(int i = word.size() - 1; i >= 0; i--)
    {
        std::cout << word[i] << std::endl;
    }
    std::cout << "Bye!" << std::endl;
    return 0;
}

