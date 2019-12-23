#include <stdio.h>
#include "calc.h"

int main(){
	int a=10;
	int b=5;

	printf("La suma de %d i %d es %d\n", a, b, suma(a,b));
	printf("La resta de %d i %d es %d\n", a, b, resta(a, b));
	printf("La multiplicacio de %d i %d es %d\n", a, b, multiplica(a,b));
	printf("La divisio entre %d i %d es %d\n", a, b, divideix(a,b));
	printf("El major entre %d i %d es %d\n", a, b, major(a, b));
}
