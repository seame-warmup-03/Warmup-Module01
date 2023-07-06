#include <iostream>
using namespace std;

int sum1(int val1, int val2) // call by value
{
    val1 = 2;
    val2 = 3;
    return val1 + val2;
}

int sum2(int &val1, int &val2) // call by reference
{
    val1 = 2;
    val2 = 3;
    return val1 + val2;
}

int main()
{
    int a = 1;
    int b = 1;
    
    cout << sum1(a, b) << endl;
    cout << a << endl;
    cout << b << endl;
    
    cout << sum2(a, b) << endl;
    cout << a << endl;
    cout << b << endl;
    
    return 0;
}
