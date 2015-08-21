#include <iostream>
#include <string>
using namespace std;
int main(int argc, char *argv[])
{
    string word;
    std::cout << "enter a word:" << std::endl;
    cin >> word;

    char temp;
    int i,j;
    for(j=0, i = word.size()-1; j<i; --i,++j)
    {
        temp = word[i];
        word[i] = word[j];
        word[j] = temp;
    }
    cout << word;
    return 0;
}

