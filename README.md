## lib_Colores_Terminal_Windows_C++
## Diseña programas basado en consola con mucho mas color con esta pequeña pero útil librería

## Dentro de esta se encuentran funciones para posicionar texto en la terminal o tener la opción de solo mover el texto a una posición sin modificar su color original.

La función **CPRINT()** recibe los siguientes valores: 

**C**[Color] -> **PRINT**[impresión] = **CPRINT** = *impresión con color*

**cprint(const string &Text, const string &ForeGround="blanco", const string &BackGround="null");**

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

Un ejemplo claro es el siguiente :
~~~
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

La salida en consola será la siguiente:
![IMAGE NOT FOUND](/image/output_main.png)

