#include <stdio.h>
#include <stdlib.h>

 void main() 5 { 6 int *p;

 p = (int*) malloc(10 * sizeof(int));

 if (p == NULL) {

 printf("Erro: Memoria insuficiente!\n");

 }

 else {

 int i;

 for (i=0; i<10; i++) {

 printf("Informe um valor: \n");

 scanf("%d", &p[i]);

 }


 for (i=0; i<10; i++) {

 printf("Valor: %d \n", p[i]);

}
 }


free(p);

 }
