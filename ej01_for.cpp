#include <iostream>
using namespace std;
int main ()
{
    int n, i;
    cout<< "ingrese un numero entero n= \n";
    cin>> n;

    for (i = 2; i <= n; i=i+2)
    {
        cout << i <<"\n";
    }
    


    return 0;
}