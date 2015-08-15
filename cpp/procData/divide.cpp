#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
    cout.setf(ios_base::fixed, ios_base::floatfield);
    cout << "Integer divsion: 9/5 = " << 9 / 5 << endl;
    cout << "Floating-point divsion:9.0/5.0 = " << 9.0 / 5.0 << endl;
    cout << "Mixed divsion:9.0/5 = " << 9.0 / 5 << endl;
    cout << "double constants:le7/9.0 = " << 1e7 / 9.0 << endl;
    cout << "float constants:le7f/9.0f = " << 1e7f / 9.0f << endl;
    
    return 0;
}
