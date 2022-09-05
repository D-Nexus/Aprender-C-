# Ejemplos de codigo C++

### Tipos de datos basicos
```c++
//Tipos de datos básicos de C++

#include <iostream>

using namespace std;

int main(){ //Función principal
    int entero = 15; //Numero enteros
    float flotante = 10.45; //Numero Decimales
    double mayor = 16.3456; //Numeros muy grandes con decimales
    char letra = 'a'; //Los datos tipo char(Caracter) deben llevar comillas simples al declararse
    
    cout<<letra; //Cambiar la variable para imprimir

    return 0; 
}
```
### Lectura o entradas de datos
```c++
//Lectura o entrada de datos

#include <iostream>

using namespace std;

int main(){
    int numero;
    cout<<"Digite un numero: ";
    cin>>numero; //Guardamos lo que digito el usurario en la variable numero
    cout<<"\nEl numero que digito es: "<<numero;

    return 0;
}
```
### Ejercicio 1 Operaciones matematicas basicas
```c++
/*1. Escribe un programa que lea de la entrada estándar dos números y muestre en la salida estándar
su suma, resta, multiplicación y división. */

#include <iostream>

using namespace std;

int main(){
    float numero1, numero2;
    float suma, resta, division, multiplicacion;
    cout<<"Digite el primer numero: ";
    cin>>numero1;
    cout<<"Digite el segundo numero: ";
    cin>>numero2;

    //Operaciones
    suma = numero1 + numero2;
    resta = numero1 - numero2;
    division = numero1 / numero2;
    multiplicacion = numero1 * numero2;

    cout<<"\nEl resultado de la suma es: "<<suma<<endl;
    cout<<"El resultado de la resta es: "<<resta<<endl;
    cout<<"El resultado de la division es: "<<division<<endl;
    cout<<"El resultado de la multiplicacion es: "<<multiplicacion<<endl;

    return 0;
}
```

