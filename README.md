## lib Colores Terminal Windows C++
## Diseña programas basado en consola con mucho mas color con esta pequeña pero útil librería

## Dentro de esta se encuentran funciones para posicionar texto en la terminal o tener la opción de solo mover el texto a una posición sin modificar su color original.

## Para el IDE CLION se debe agregar/modificar las siguientes lineas del archivo "CMakeLists.txt".
~~~
set(CMAKE_CXX_STANDARD 20)
add_executable(<NOMBRE DEL PROYECTO> <NOMBRE DEL MAIN.CPP> cterm.h cterm.cpp)
~~~

## Ejemplo para este proyecto.
~~~
cmake_minimum_required(VERSION 3.17)
project(LIB-COLOR)

set(CMAKE_CXX_STANDARD 20)

add_executable(LIB-COLOR main.cpp cterm.h cterm.cpp)
~~~

* El proyecto se llama LIB-COLOR
* El archivo principal es main.cpp

Ademas deberas copiar los archivos de la carpeta Lib (cterm.h, cterm.cpp) al directorio principal de tu proyecto.
______________________________________________________________________________________________________________________________________

La función **CPRINT()** recibe los siguientes valores:

**cprint(Text, ForeGround="blanco", BackGround="null");**

los valores de **ForeGround** y **BackGround** tienen un valor predeterminado, por lo que no es necesario completar esos campos.
* **Text**        -> "Texto que se va a mostrar en consola"
* **ForeGround**  -> "Color de letra que se la va a aplicar"
* **BackGround**  -> "Color de Fondo que se va a aplicar"

## Lista de colores disponibles:
* Blanco
* Azul
* Rojo
* Morado
* Verde
* Azul Cielo

## Un ejemplo claro es el siguiente :
~~~
#include <iostream>
#include "cterm.h"

auto main() -> int {
    cprint("TEXTO COLOR AZUL Y FONDO AZUL","azul","blanco");
    cprint("TEXTO COLOR AZUL Y FONDO ROJO","azul","rojo");
    cprint("TEXTO COLOR AZUL Y FONDO VERDE","azul","verde");
    cprint("TEXTO COLOR AZUL Y FONDO NARANJA","azul","naranja");
    cprint("TEXTO COLOR AZUL Y FONDO AZUL CIELO","azul","azul cielo");
    cprint("TEXTO COLOR AZUL Y FONDO MORADO","azul","morado");

    cprint("TEXTO COLOR BLANCO Y FONDO AZUL","blanco","azul");
    cprint("TEXTO COLOR BLANCO Y FONDO ROJO","blanco","rojo");
    cprint("TEXTO COLOR BLANCO Y FONDO VERDE","blanco","verde");
    cprint("TEXTO COLOR BLANCO Y FONDO NARANJA","blanco","naranja");
    cprint("TEXTO COLOR BLANCO Y FONDO AZUL CIELO","blanco","azul cielo");
    cprint("TEXTO COLOR BLANCO Y FONDO MORADO","blanco","morado");

    cprint("TEXTO COLOR ROJO Y FONDO AZUL","rojo","azul");
    cprint("TEXTO COLOR ROJO Y FONDO BLANCO","rojo","blanco");
    cprint("TEXTO COLOR ROJO Y FONDO VERDE","rojo","verde");
    cprint("TEXTO COLOR ROJO Y FONDO NARANJA","rojo","naranja");
    cprint("TEXTO COLOR ROJO Y FONDO AZUL CIELO","rojo","azul cielo");
    cprint("TEXTO COLOR ROJO Y FONDO MORADO","rojo","morado");

    cprint("TEXTO COLOR VERDE Y FONDO AZUL","verde","azul");
    cprint("TEXTO COLOR VERDE Y FONDO BLANCO","verde","blanco");
    cprint("TEXTO COLOR VERDE Y FONDO BLANCO","verde","rojo");
    cprint("TEXTO COLOR VERDE Y FONDO NARANJA","verde","naranja");
    cprint("TEXTO COLOR VERDE Y FONDO AZUL CIELO","verde","azul cielo");
    cprint("TEXTO COLOR VERDE Y FONDO MORADO","verde","morado");

    system("pause > NULL");
    return 0;
}
~~~

## La salida en consola será la siguiente:

![IMAGE NOT FOUND](/image/output_main.png)


La función **CPRINTP()** recibe los siguientes valores: 

**cprintp(Text, PosX, PosY, ForeGround="blanco", BackGround="null");**

los valores de **ForeGround** y **BackGround** tienen un valor predeterminado, por lo que no es necesario completar esos campos.

* **Text**        -> "Texto que se va a mostrar en consola"
* **PosX**        -> "Posicion del Texto en el eje X"
* **PosY**        -> "Posicion del Texto en el eje Y"
* **ForeGround**  -> "Color de letra que se la va a aplicar"
* **BackGround**  -> "Color de Fondo que se va a aplicar"

## Un ejemplo claro es el siguiente :

~~~
#include <iostream>
#include "cterm.h"

auto main() -> int {
    cprintp("JERRYFS-BIT",10,1,"blanco","azul");
    cprintp("JERRYFS-BIT",11,2,"blanco","rojo");
    cprintp("JERRYFS-BIT",12,3,"blanco","verde");
    cprintp("JERRYFS-BIT",13,4,"blanco","azul cielo");
    cprintp("JERRYFS-BIT",14,5,"blanco","morado");
    
    system("pause > NULL");
    return 0;
}
~~~


## La salida en consola será la siguiente:

![IMAGE NOT FOUND](/image/output2_main.png)
