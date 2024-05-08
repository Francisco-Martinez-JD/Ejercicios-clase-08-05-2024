#include <iostream>
using namespace std;
int main ()
{
    char opcion;

    do{

        cout<< "Menu"<< "\n";
        cout<< "A Carne asasda"<< "\n";
        cout<< "B Pollo"<< "\n";
        cout<< "C cerdo"<< "\n";
        cout<< "Seleccione una opcion: "<< "\n";
        cin>> opcion;
        cout<< "Opcion seleccionada:"<< opcion << "\n";

    }
    while (opcion != 'A' and opcion != 'B' and opcion != 'C') ;

    
    return 0;
}
