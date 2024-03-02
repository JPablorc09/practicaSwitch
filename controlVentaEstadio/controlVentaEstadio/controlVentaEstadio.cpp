// controlVentaEstadio.cpp : This file contains the 'main' function. Program execution begins and ends there.

/*3- Debe crear un programa para el control de venta de entradas a un estadio. Se le
debe mostrar el siguiente menú al usuario:
1. Sol
2. Sombra
3. Platea
4. Palco
5. VIP
Luego de elegir la ubicación, se le debe preguntar al usuario por la cantidad de
entradas. El precio de cada una es el siguiente (mismo orden del menú): 2800, 3350,
4500, 5650 y 7655.*/

#include <iostream>
using namespace std;

int main()
{
    //Declaramos  variables
    int op,cantidadEntradas,totalPagar;
    
    //Mostramos el menu al usuario
    cout << "************************************************\n";
    cout << "                Venta de Entradas               \n";
    cout << "                   1.Sol                        \n";
    cout << "                   2.Sombra                     \n";
    cout << "                   3.Platea                     \n";
    cout << "                   4.Palco                      \n";
    cout << "                   5.VIP                        \n";
    cout << "                   6.salir                      \n";
    cout << "************************************************\n";
    cout << "Elija una opcion\n ";
    //almacenamos el dato en la variable op;
    cin >> op;
    //realiza el proceso de acuerdo a cada seleccion de menu
    switch (op)
    {
    case 1:
        cout << "Cuantas entradas desea comprar:\n";
        cin >> cantidadEntradas;
        totalPagar = cantidadEntradas * 2800;
        cout << "El total a pagar es de :\n" << totalPagar << " ₡";
        break;
    case 2:
        cout << "Cuantas entradas desea comprar:\n";
        cin >> cantidadEntradas;
        totalPagar = cantidadEntradas * 3350;
        cout << "El total a pagar es de :\n" << totalPagar << " ₡";
        break;
    case 3:
        cout << "Cuantas entradas desea comprar:\n";
        cin >> cantidadEntradas;
        totalPagar = cantidadEntradas * 4500;
        cout << "El total a pagar es de :\n" << totalPagar << " ₡";
        break;
    case 4:
        cout << "Cuantas entradas desea comprar:\n";
        cin >> cantidadEntradas;
        totalPagar = cantidadEntradas * 5650;
        cout << "El total a pagar es de :\n" << totalPagar << " ₡";
        break;
    case 5:
        cout << "Cuantas entradas desea comprar:\n";
        cin >> cantidadEntradas;
        totalPagar = cantidadEntradas * 76550;
        cout << "El total a pagar es de :\n" << totalPagar << " ₡";
        break;
    default:
        op = 6;
           cout << "Salio del sistema";
        break;
    }
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
