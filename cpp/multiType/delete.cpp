#include <iostream>
#include <cstring>
using namespace std;
char * getname(void);
int main(int argc, char *argv[])
{
    char * name;

    name = getname();
    std::cout << name << " at " << (int*)name << std::endl;
    delete [] name;
    name = getname();
    std::cout << name << " at " << (int*)name << std::endl;
    delete [] name;
    return 0;
}
char * getname()
{
    char temp[80];
    std::cout << "Enter last name: " << std::endl;
    cin >> temp;
    char *pn = new char[strlen(temp)+1];
    strcpy(pn, temp);
    return pn;
}

