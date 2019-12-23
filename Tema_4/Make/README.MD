# Inici del document de README per als ejercicis de make

1. ***Exemple de compilacio del fitxer hola.c, caldrá que estiga aquest fitxer al repositori...***

- **El fitxer hola.c inclou un xicotet programa de hola mon**

~~~c
include <stdio.h> //importa la llibreria standard input/output per a  poder fer un del printf

int main()//funcio main, es llança la primera nomes començar el programa
{
	printf("Hola món\n");//imprimeix per consola la frase Hola món i un salt de linea
	return 0;//Parametre que retorna indicant que ha finalitat correctament
}
~~~  

**-He compilat el fitxer fent us del make.**

make hola // que executa cc hola.c -o hola  

**-El resultat es el programa** ***hola*** **que s'executa amb** ***./hola*** imprimint per consola *Hola món*

2. ***Exemple de la calculadora (fitxers calc.c, calcula.c i calc.h), amb la funcionalitat del exmeples mes la funcion major()....  

* **Implemente el codi en els tres fitxers, compile el fitxer objecte de la llibreria

gcc -c calc.c -o calc.o
gcc calc.o calcula.c -o calcula


