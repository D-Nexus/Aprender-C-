# Clase 2 Estructura de datos

## Estructura General de un Programa en C y C++

```c++
#include -- Directivas del preprocesador ("incluir" las declaraciones de otro fichero)

#define-- Macros del procesador (proporcionan un mecanismo de reemplazo de tokens)
```

### Declaraciones globales
Prototipos de funciones <br>
Variables globales

### Función principal main
```c++
<tipodato> main ()
{   declaraciones locales
    sentencias
}
```

### Declaraciones de otras funciones
```c++
tipodato func(...)
{
}
```
## Ejemplo Hello World en C  y C++
---
### Ejemplo lenguaje C
```c
#include <stdio.h>
#include <stdlib.h>

int main(void)
{   printf("Hola Mundo!\n")
    return 0;
}
```
### Ejemplo lenguaje C++
```c++
#include <iostream>

int maind(void)
{   std::cout<<"Hola Mundo!"<< std::endl;
    return 0;
}
```
### Mejor con namespace programas en C++, C no tiene
```c++
#include <iostream>
using namespace std;
{
    cout<<"Hola Mundo"<< endl;
    return 0;
}
```
### Codigo para sumar 2 numeros
```c++
#include <iostream>

using namespace std;

int main() {
    int a,b;
    cout<<"Inserte el valor de a: ";
    cin >> a;
    cout<< "Inserte el valor de b: ";
    cin>>b;
    cout<<"Valor de a: "<<a<<endl<<"Valor de b: "<<b<<endl;
    return 0;
}
```