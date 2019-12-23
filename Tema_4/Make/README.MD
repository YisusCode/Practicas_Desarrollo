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

~~~bash
make hola // que executa cc hola.c -o hola
~~~  

**-El resultat es el programa** ***hola*** **que s'executa amb** ***./hola*** imprimint per consola *Hola món*

2. ***Exemple de la calculadora (fitxers calc.c, calcula.c i calc.h), amb la funcionalitat del exmeples mes la funcion major()....***  

* **Implemente el codi en els tres fitxers, compile el fitxer objecte de la llibreria**

gcc -c calc.c -o calc.o
gcc calc.o calcula.c -o calcula

* **Cree el fitxer MakeFile amb els targets indicats i verifique que funcionen, no tinc molt clar com mostrar el funcionament en la memoria aixi que adjunte el que fa cada target al executarse,i indiquen lo seguent**

~~~bash
make clean
rm -rf *.o
rm calcula

make targz
rm -rf *.o
rm calcula
mkdir -p source
cp *.c *.h Makefile source
tar -cvf cacula.tar source
source/
source/calcula.c
source/hola.c
source/calc.h
source/Makefile
source/calc.c
gzip calcula.tar
rm -rf calcula.tar
rm -rf source

sudo make dist
rm -rf *.o
rm calcula
gcc -g -Wall - c calc.c -o calc.o
gcc -Wall -g calcula.c calc.o -o calcula
rm -rf ../dist;
mkdir -p ../dist/usr/bin/calc
cp calcula ../dist/usr/bin/calc

sudo make install
rm -rf *.o
rm calcula
gcc -g -Wall -c calc.c -o calc.o
gcc -Wall - g calcula.c calc.o -o calcula
rm -rf ../dist;
mkdir -p ../dist/usr/bin/calc
cp calcula ../dist/usr/bin/calc
cp -r ../dist/* /
~~~

