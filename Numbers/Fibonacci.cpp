#include <iostream>
using namespace std;

int main()
{
    int num = 15;
    int a = 0 , b = 1 , c;
    cout << a << ", " << b << " , ";
    for (int i = 2; i < num; i++)
    {
        c = a + b;
        a = b; 
        b = c;

        cout << c << " , ";
    }
    
    return 0;
}