#include <iostream>
#include <stdio.h>
#include <math.h>
#include <conio.h>

using namespace std;

/*Funcion recursiva para la realizacion del factorial*/
int factorial(int n) {
    if (n == 0) { /*Si n es IGUAL a 0*/
        return 1; /* Caso base : factorial de 0 es 1*/
    }
    else { /*Si n es DIFERENTE a 0 */
        return n * factorial(n - 1); /* Se llama a la recursiva para la realizacion del factorial*/
    }
}

void Cajero() {
    int saldo = 20000;
    int opcion, retiro;
    do {
        cout << "CAJERO AUTOMATICO" << endl;
        cout << "1. Consultar Saldo" << endl;
        cout << "2. Retirar Efectivo" << endl;
        cout << "3. Saldo despues de retirar" << endl;
        cout << "Ingrese una opcion: ";
        cin >> opcion;

        switch (opcion) {
        case 1:
            cout << "Su saldo actual es: $" << saldo << endl;
            break;
        case 2:
            cout << "Ingrese la cantidad a retirar: $";
            cin >> retiro;
            if (retiro <= saldo) {
                saldo -= retiro;
                cout << "Se han retirado $" << retiro << endl;
                cout << "Su nuevo saldo es: $" << saldo << endl;
            }
            else {
                cout << "Fondos insuficientes." << endl;
            }
            break;
        case 3:
            cout << "Saldo despues de retirar: $" << saldo << endl;
            break;
        default:
            cout << "Opción inválida." << endl;
        }
    } while (opcion != 4);
}

int main() {
    int num;
    int opcion;

    cout << "Elaborado por: Frida Isabel Perez Jaime 193058" << endl;

    cout << "Ingrese la opcion que desea realizar:" << endl;
    cout << "1. Factorial de un numero" << endl;
    cout << "2. Cajero automatico" << endl;
    cin >> opcion;

    switch (opcion) {
    case 1: {
        cout << "Ingrese el numero del cual desea calcular el factorial" << endl; /*Pedir al usuario el numero*/
        cin >> num; /*guardar el numero en el entero NUM*/

        if (num < 0) { /*Si num es menor a 0*/
            cout << "El factorial no está definido para números negativos." << endl; /*Excepcion de uso*/
        }
        else { /*Si num es mayor a 0*/
            cout << "El factorial de " << num << " es: " << factorial(num) << endl; /*Mostrar el resultado del factorial*/
            break;
        }
    }
    case 2: {
        Cajero();
        break;
    }
    case 3:
        cout << "Saliendo del programa." << endl;
        break;
    }while (opcion != 3);
}

