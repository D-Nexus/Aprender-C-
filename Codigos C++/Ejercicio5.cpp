/*1. Escribe un programa que lea de la entrada estándar dos números y muestre en la salida estándar
su suma, resta, multiplicación y división. */

#include <iostream>

using namespace std;

int main(){
    
    //Entradas
    float n1, n2, suma = 0, resta = 0, division = 0, multiplicacion = 0;
    cout<<"Digite el primer numero: "; cin>>n1; //El ";" es un separador de expresiones
    cout<<"Digite el segundo numero: "; cin>>n2;

    //Operaciones
    suma = n1 + n2;
    resta = n1 - n2;
    division = n1 / n2;
    multiplicacion = n1 * n2;

    //Salidas
    cout<<"\nEl resultado de la suma es: "<<suma<<endl;
    cout<<"El resultado de la resta es: "<<resta<<endl;
    cout<<"El resultado de la division es: "<<division<<endl;
    cout<<"El resultado de la multiplicacion es: "<<multiplicacion<<endl;

    return 0;
}