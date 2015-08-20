#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[])
{
    string s1 = "penguin";
    string s2, s3;

    cout << "You can assign one string object to anther: s2 = s1\n";
    s2 = s1;
    std::cout << "s1:" << s1 << "s2:" << s2 << std::endl;

    std::cout << "You can  assign a C-style string to a string object." << std::endl;
    std::cout << "s2 = \"buzzard\"" << std::endl;
    s2 = "buzzard";
    std::cout << "s2:" << s2 << std::endl;
    std::cout << "You can concatenate strings: s3 = s1 + s2" << std::endl;
    s3 = s1 + s2;
    std::cout << "s3:" << s3  << std::endl;
    std::cout << "s1 += s2 yields s1 = " << s1 << std::endl;
    s2 += "for a day";
    std::cout << "s2 += \" for a day\" yields s2 = " << s2 << std::endl;
    return 0;
}

