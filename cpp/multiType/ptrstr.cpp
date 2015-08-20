#include <iostream>
#include <cstring>

using namespace std;

int main(int argc, char *argv[])
{
    char animal[20] = "bear";
    const char * bird = "wren";
    char * ps;

    cout << animal << " and ";
    cout << bird << "\n";

    cout << "enter a kind a animal: ";
    cin >> animal;

    ps = animal;
    std::cout << ps << std::endl;
    std::cout << "before using strcpy():" << std::endl;
    std::cout << animal << " at " << (int*)animal << std::endl;
    std::cout << ps << " at " << (int *)ps << std::endl;

    ps = new char[strlen(animal) + 1];
    strcpy(ps, animal);
    std::cout << "after using strcpy():" << std::endl;
    std::cout << animal << " at " << (int *) animal  << std::endl;
    cout << ps << " at " << (int * ) ps << endl;
    delete [] ps;
    return 0;
}

