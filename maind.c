#include <stdio.h>
int main() {
   int n, i;
   
   do {
       printf("Ingrese el tamaño del vector (positivo): ");
       scanf("%d", &n);
   } while(n <= 0);
   int A[n];
   
   for(i = 0; i < n; i++) {
       do {
           printf("Ingrese A[%d] (solo positivo): ", i+1);
           scanf("%d", &A[i]);
           if(A[i] <= 0) {
               printf("Error: solo se permiten numeros enteros positivos.\n");
           }
       } while(A[i] <= 0);
   }
   
   printf("\nVector ingresado:\n");
   for(i = 0; i < n; i++) {
       printf("%d ", A[i]);
   }
   return 0;
}
