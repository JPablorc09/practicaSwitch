// tipoPago.cpp : This file contains the 'main' function. Program execution begins and ends there.
/*2. Diseñe un programa que solicite al usuario el ingreso de un valor numérico 
correspondiente al monto de una factura. Posteriormente debe mostrar al usuario el 
siguiente menú para que elija su forma de pago:
1. Tarjeta de Crédito
2. Contado
3. Tarjeta del Restaurant
Si elige la opción 1, el descuento es del 11%. Debe mostrar el monto del descuento y 
el monto total que se le rebajará de la tarjeta.
Si elige la opción 2, el descuento es del 15%. Debe mostrar el monto del descuento y 
el monto total que debe pagar en efectivo.
Si elige la opción 3, el descuento es del 8%. Debe mostrar el monto del descuento y el 
monto total que debe pagar. Además, debe preguntar al usuario en cuantas cuotas 
desea cancelar la factura (máximo 5). Si el usuario digita un número mayor, debe 
enviar un mensaje que diga que NO es válido y automáticamente se le aplica en 2 
cuotas. En cualquier caso, debe indicar en cuanto queda cada cuota*/

#include <iostream>
using namespace std;

int main()
{
    double monto,descuento,montoFinal;
    int tipoPago,cuotas;
    cout << "Ingrese el monto final de la compra: ";
    cin >> monto;

    cout << "******************************************************\n";
    cout << "            Elija el metodo de pago                   \n";
    cout << "             1.Tarjeta de credito                     \n";
    cout << "             2.Contado                                \n";
    cout << "             3.Tarjeta de credito                     \n";
    cout << "******************************************************\n";
    cout << "              Elija una opcion                        \n";
    cin >> tipoPago;
    switch (tipoPago)
    {
    case 1:
        descuento = monto * 0.11;
        montoFinal = monto - descuento;
        cout << "\nEl descuento es de:\n"<<descuento;
        cout << "\nEl monto Final a pagar es de: " << montoFinal;
        break;
    case 2:
        descuento = monto * 0.15;
        montoFinal = monto - descuento;
        cout << "\nEl descuento es de:\n" << descuento;
        cout << "\nsEl monto Final a pagar es de: " << montoFinal;
        break;
    case 3:
        descuento = monto * 0.08;
        montoFinal = monto - descuento * 2;
        cout << "Ingrese la cantidad de cuoutas a pagar:\n ";
        cin >> cuotas;
        if (cuotas > 5) {
            cout << "la cantidad de cuota no es permitido:";
           
            cout << "\n El descuento es de:\n" << descuento;
            cout << "\n El monto Final a pagar en 2 cuotas es de: \n" << montoFinal;
        }
        cout << "\n El descuento es de:\n" << descuento;
        cout << "\n El monto Final a pagar es de: \n" << monto-descuento;
    default:
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
