#include <iostream>

using namespace std;

int MemAddress(int MA1, int MA2)
{
    MA1 = 7999; // dup giltch
    MA2 = 8432; // cesino roullete heck
    MA3 = 4832; // cuztom choos roullete number hax
}

int main()
{
    int MA1, MA2, MA3;
    
    MemAddress(MA1, MA2, MA3);
    
    cout << &MA1 << endl;
    cout << &MA2 << endl;
    cout << &MA3 << endl;
    
    while (true)
        int* dupeglitch = new int(INT_MAX);
}
