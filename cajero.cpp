#include <iostream>
using namespace std;

int main()
{
    // La clave correcta
    const string claveCorrecta = "0000";
    cout << "Bienvenido al cajero automático\n";
    cout << "Ingrese la clave: ";
    string clave = "";
    cin >> clave;
    if (clave != claveCorrecta)
    {
        cout << "Clave incorrecta";
        
        
        return 0;
    }
    
    cout << "Clave correcta\nBienvenido\n";
    double fondos = 50000; 

    string eleccion = "";
    
    while (eleccion != "2")
    {
        
        cout << "Fondos disponibles: " << fondos << endl;
        
        cout << "1. Retirar dinero\n2. Salir\nSeleccione: ";
        cin >> eleccion;
        if (eleccion == "1")
        {
           
            double retiro;
            cout << "Ingrese cantidad a retirar: " << endl;
            cin >> retiro;
            
            if (retiro > fondos || retiro <= 0)
            {
                cout << "No puede retirar esa cantidad";
            }
            else
            {
               
                cout << "OK. Ha retirado " << retiro << endl;
               
                fondos = fondos - retiro;
                
            }
        }
    }
    return 0;
}
