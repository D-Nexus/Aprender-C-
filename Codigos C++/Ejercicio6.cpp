/*. Realice un programa que lea de la entrada estándar los siguientes datos de una persona:

    Edad: dato de tipo entero
    Sexo: dato de tipo carácter
    Altura en metros: dato de tipo real

Tras leer los datos, el programa debe mostrarlos en la salida estándar. */

#include <iostream>

using namespace std;

int main(){

    //Entradas
    int edad; char sexo; float altura;

    //Programa
    cout<<"Ingrese su edad: "; cin>>edad;
    cout<<"Ingrese su sexo: "; cin>>sexo;
    cout<<"Ingrese su altura en metros: "; cin>>altura;

    //Salidas
    cout<<"\nSu edad es: "<<edad<<endl;
    cout<<"Su sexo es: "<<sexo<<endl;
    cout<<"Su altura es: "<<altura<<endl;

    return 0;
}
//Si uso char sexo; solo guardara 1 caracter. 
//Si uso char sexo[10] le estoy especificando que quiero guardar 10 caracteres.
//Tambien podemos simplemente usar una variable de tipo string ---> string sexo pero usa mas espacio en memoria.