// menuEntretenimiento.cpp : This file contains the 'main' function. Program execution begins and ends there.

/*
* 4. Diseñe un programa que solicite el nombre del usuario y luego muestre un menú con
las siguientes categorías de entretenimiento:
L. Libros
C. Cine
D. Deportes
T. Teatro
Cuando el usuario elija alguna de las categorías, inmediatamente se le debe mostrar
un nuevo menú con al menos 3 opciones de esa categoría.
Al final se debe mostrar el nombre de la persona, así como el nombre de la categoría
y la opción elegida de esa categoría.
*/

#include <iostream>
using namespace std;

int main()
{
    //Declaramos variable
    string nombre;
    int op;
    //solocitamos el nombre al usuario
    cout << "Ingrese el nombre:\n ";
    //guardamos el nombre en la variable nombre
    cin >> nombre;
    //mostramos la siguiente informacion como un menu
    cout << "******************************************************\n";
    cout << "              Categoria de entretenimiento            \n";
    cout << "                      1.Libros                        \n";
    cout << "                      2.Cine                          \n";
    cout << "                      3.Deportes                      \n";
    cout << "                      4.Teatro                        \n";
    cout << "                      5.Salir                         \n";
    cout << "******************************************************\n";
    cout << "Elija una opcion: \n";
    //guardamos la opcion en la variable op;
    cin >> op;
        //mostramos la informacion solicitada de acuerdo a cada menu digitada
        switch (op)
        {
        case 1:
            cout << "******************************************************\n";
            cout << "                  Categoria de libro                  \n";
            cout << "               1.Tecnicos y Manualidades              \n";
            cout << "               2.AutoAyuda                            \n";
            cout << "               3.Educacion Infantil                   \n";
            cout << "               4.Tecnologia                           \n";
            cout << "******************************************************\n";
            break;
        case 2:
            cout << "******************************************************\n";
            cout << "                Categoria de Cine                     \n";
            cout << "                   1.Accion                           \n";
            cout << "                   2.Aventura                         \n";
            cout << "                   3.Comedia                          \n";
            cout << "                   4.Infantil                         \n";
            cout << "******************************************************\n";
            break;
        case 3:
            cout << "******************************************************\n";
            cout << "                  Categoria de Deportes               \n";
            cout << "                       1.Futbol                       \n";
            cout << "                       2.Natacion                     \n";
            cout << "                       3.Basketball                   \n";
            cout << "                       4.Ciclismo                     \n";
            cout << "******************************************************\n";
            break;

        case 4:
            cout << "******************************************************\n";
            cout << "                  Categoria de Teatro                 \n";
            cout << "                       1.Comedia                      \n";
            cout << "                       2.Romantisismo                 \n";
            cout << "                       3.Drama                        \n";
            cout << "                       4.Opera                        \n";
            cout << "******************************************************\n";
            break;
        default:
            op = 5;
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
