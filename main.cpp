#include<iostream>

using namespace std;

int main()
{
    unsigned short n;
    cout << "Enter number: "; cin >> n;
    char *p = (char*)&n;
    cout << (unsigned short)*p << endl;
    p++;
    cout << (unsigned short)*p << endl;
    return 0;
}