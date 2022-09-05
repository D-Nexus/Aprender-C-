/*5. Escriba un fragmento de programa que intercambie los valores de dos variables. */

#include <iostream>

using namespace std;

int main(){
    //Variables
    string a,b,c; //La "c" es mi variable de ayuda
    //Entradas
    cout<<"Ingrese un valor para a: "; cin>>a;
    cout<<"Ingrese un valor para b: "; cin>>b;
    //Programa
    c = a;
    a = b;
    b = c;

    cout<<"Los valores de las variables son:\n";
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;

    return 0;
}