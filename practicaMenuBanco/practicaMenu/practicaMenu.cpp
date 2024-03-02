// practicaMenu.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
/*
1. Crear un programa que solicite al usuario un valor numérico, el cual representa el
monto de un préstamo. Posteriormente debe mostrar al usuario el siguiente menú:
P. Banco Popular
C. Banco de Costa Rica
N. Banco Nacional
Cualquiera que sea la opción elegida por el usuario debe mostrar la siguiente
información:
▪ ENTIDAD:
▪ MONTO:
▪ TASA ANUAL:
▪ TASA MENSUAL:
▪ PLAZO (MESES):
▪ CUOTA:
La tasa anual queda así: Popular 16% (0.16), BCR 17,5% (0.175) y BN 15,6% (0.156)
La tasa mensual se calcula dividiendo la tasa anual entre 12.
El plazo en meses será 48, 42 y 36 respectivamente.
La fórmula para calcular la cuota es: ((tasa mensual * préstamo) + préstamo) / plazo.
*/

#include <iostream>
using  namespace std;

int main()
{
    double monto;
    int tipobanco;
    cout << "Ingrese el monto: ";
    cin >> monto;

    cout << "***************************************\n";
    cout << "Elija un Banco \n";
    cout << "\n 1.Banco de Costa Rica \n";
    cout << "\n 2.Banco Popular \n";
    cout << "\n 3.Banco Nacional \n";
    cout << "***************************************\n";
    cout << "\n ELIJA UNA OPCION ";
    cin >> tipobanco;

    switch (tipobanco)
    {
     case 1:
        cout << "\n Banco Costa Rica";
        cout << "\n Monto prestamo: " << monto;
        cout << "\n tasa anual: 17.5%";
        cout << "\n tasa Mensual: " << 17.5 / 12 << "%";
        cout << "\n Poliza: 42 meses ";
        cout << "\n cuota " << (0,17.5 / 12 * monto + monto) / 42;
        break;
     case 2:
        cout << "\n Banco Popular";
        cout << "\n Monto prestamo: " << monto;
        cout << "\n tasa anual: 16%";
        cout << "\n tasa Mensual: " << 16/12<<"%";
        cout << "\n Poliza: 48 meses ";
        cout << "\n cuota " << (0.16 / 12 * monto + monto) / 48;
        
        break;

    case 3:
        cout << "\n Banco Nacional ";
        cout << "\n Monto prestamo: " << monto;
        cout << "\n tasa anual: 15.6%";
        cout << "\n tasa Mensual: " << 15.6 / 12 << "%";
        cout << "\n Plazo: 36 meses ";
        cout << "\n cuota " << (0,15.6 / 12 * monto + monto) / 36;
        break;
    default:
        break;
    }
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
