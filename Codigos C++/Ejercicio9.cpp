/*7. La calificación final de un estudiante es la media ponderada de tres notas:
La nota de prácticas que cuenta un 30% del total, la nota teórica que cuenta un
60% y la nota de participación que cuenta el 10% restante. Escriba un programa
que lea de la entrada estándar las tres notas de un alumno y escribia en la
salida estándar su nota final. */

#include <iostream>

using namespace std;

int main(){
    //Variables
    float n1, n2, n3, nota_final = 0;

    //Entradas
    cout<<"Ingrese la primera nota: "; cin>>n1;
    cout<<"Ingrese la segunda nota: "; cin>>n2;
    cout<<"Ingrese la tercera nota: "; cin>>n3;

    //Programa
    nota_final = (n1*0.3)+(n2*0.6)+(n3*0.1);

    //Salidas
    cout<<"\nLa nota final del alumno es: "<<nota_final<<endl;
    
    return 0;
}