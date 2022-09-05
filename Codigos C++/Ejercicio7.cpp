//1. Escribe la siguiente expresión como expresión en C++

#include <iostream>

using namespace std;

int main(){
    //Entradas
    float a, b, resultado = 0;
    cout<<"Ingresa el primer numero: "; cin>>a;
    cout<<"Ingresa el segundo numero: "; cin>>b;
    //Programa
    resultado = (a / b) + 1; //Expresión en C++
    //Salidas
    cout<<"\nEl resultado de la expresión es: "<<resultado;
    //Para imprimir el resultado con solo 2 decimales
    cout.precision(2);
    cout<<"\nEl resultado de la expresión con 2 decimales es: "<<resultado;

    return 0;
}