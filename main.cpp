#include <iostream>

using namespace std;

int MemAddress(int MA1, int MA2)
{
    MA1 = 7999;
    MA2 = 8432;
}

int main()
{
    int MA1, MA2;
    
    MemAddress(MA1, MA2);
    
    cout << &MA1 << endl;
    cout << &MA2 << endl;
}
