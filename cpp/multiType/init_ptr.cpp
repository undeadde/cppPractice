#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
    int higgens = 56;
    int *pt = &higgens;

    cout << "Value of higgens = " << higgens << "; Address of higgens = " << &higgens << endl;
    cout << "Vaule of *pt = " << *pt << "; Value of pt = " << pt << endl;
    return 0;
}
