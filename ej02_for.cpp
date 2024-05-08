#include <iostream>
using namespace std;
main () {
    int n, i, primo= 1;
    cout<< "Ingrese un numero entero n = \n";
    cin>> n;
    for (i = n-1;  i>=2; i=i-1)
    {
        int modulo=n%i;
        if (modulo == 0)
        {
            cout<<n<< "El numero no es primo \n";
            primo=0;
            break;
        }
        if (primo) 
        { 
            cout<< "El numero es primo \n";
        break;
        }
        
    }
        


    return 0;
}