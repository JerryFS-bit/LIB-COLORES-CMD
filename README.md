## lib_Colores_Terminal_Windows
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
**cprint("TEXTO COLOR BLANCO Y FONDO AZUL","blanco","azul");**

La salida en consola será la siguiente:

