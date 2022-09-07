/*Implemente un programa en C++ que lea el valor del radio y calcule la longitud de la
circunferencia, el área del círculo y el volumen de la esfera correspondiente a ese radio.*/

//1. Datos del radio
#include <iostream>
#include <math.h> //Libreria para usar potencias

using namespace std;

int main(){
    
    float radio, longitud, area, volumen;

    cout<<"Ingrese el radio: "; cin>>radio;

    //Operaciones
    longitud = 2 * 3.14 * radio;
    area = 3.14 * pow(radio,2);
    volumen = (4.0/3.0) * 3.14 * pow(radio,3);

    cout<<"\nLa longitud de la circunferencia es: "<<longitud<<endl;
    cout<<"El área del circulo es: "<<area<<endl;
    cout<<"El volumen de la esfera es: "<<volumen<<endl;


    return 0;
}

//Nota
/*El error en el cálculo del volumen de la esfera se debe a los tipos de datos en la fracción (4 / 3). 
El 4 es un número entero y el 3 es otro número entero. Luego, un número entero dividido entre otro número entero 
genera un nuevo número entero (en este caso 4 / 3 es igual a 1). Una forma fácil de solucionarlo es escribiendo 
la fracción como (4.0 / 3.0), quedando así volumen = (4.0 / 3.0) * M_PI * pow(radio, 3);*/

//volumen = (4/3) * 3.14 * pow(radio,3); --> Da como resultado 392.6
//volumen = (4.0/3.0) * 3.14 * pow(radio,3); --> Da como resultado 523.5