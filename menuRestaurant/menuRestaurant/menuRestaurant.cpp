// menuRestaurant.cpp : This file contains the 'main' function. Program execution begins and ends there.

/*5. Elabore un programa que muestre un menú con 4 opciones de comida rápida. Defina
usted cuáles son esas opciones y los respectivos precios. Tome en consideración la
cantidad de esa comida que el usuario desea comprar.
Adicional al precio, se debe cobrar un monto de 1750 por concepto de servicio
exprés. Muestre el monto final a pagar.*/

#include <iostream>
using  namespace std;

int main()
{
    // Definir las opciones de comida rápida y sus precios
    string opc1 = "Hamburguesa";
    string opc2 = "Pizza";
    string opc3 = "Hot dog";
    string opc4 = "Papas fritas";

    float precio1 = 5000; // Precio de la hamburguesa en pesos
    float precio2 = 6000; // Precio de la pizza en pesos
    float precio3 = 4000; // Precio del hot dog en pesos
    float precio4 = 3000; // Precio de las papas fritas en pesos

    // Mostrar el menú
    cout << "Menu de Comida Rapida:" << endl;
    cout << "1. Hamburguesa - ₡" << precio1 << endl;
    cout << "2. Pizza - ₡" << precio2 << endl;
    cout << "3. Hot dog - ₡" << precio3 << endl;
    cout << "4. Papas fritas - ₡" << precio4 << endl;

    // Pedir al usuario que elija una opción
    int opcion;
    cout << "Seleccione una opcion (1-4): ";
    cin >> opcion;

    // Validar la opción ingresada
    if (opcion < 1 || opcion > 4) {
        cout << "Opcion invalida. Por favor seleccione una opcion valida." << endl;
        return 1; // Salir del programa con código de error
    }

    // Pedir al usuario la cantidad de la opción seleccionada
    int cantidad;
    cout << "Ingrese la cantidad de ";
    switch (opcion) {
    case 1:
        cout << opc1;
        break;
    case 2:
        cout << opc2;
        break;
    case 3:
        cout << opc3;
        break;
    case 4:
        cout << opc4;
        break;
    }
    cout << " que desea comprar: ";
    cin >> cantidad;

    // Calcular el subtotal
    float subtotal;
    switch (opcion) {
    case 1:
        subtotal = precio1 * cantidad;
        break;
    case 2:
        subtotal = precio2 * cantidad;
        break;
    case 3:
        subtotal = precio3 * cantidad;
        break;
    case 4:
        subtotal = precio4 * cantidad;
        break;
    }

    // Calcular el monto del servicio express
    float servicioExpress = 1750;

    // Calcular el monto total a pagar
    float total = subtotal + servicioExpress;

    // Mostrar el monto total a pagar
    cout << "Subtotal: ₡" << subtotal << endl;
    cout << "Servicio Express: ₡" << servicioExpress << endl;
    cout << "Total a pagar: ₡" << total << endl;

    return 0;
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
