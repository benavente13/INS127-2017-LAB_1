#include <stdio.h>


int main(int argc, char** args){
  int af, ac, i, j, k;
  printf("Numero de filas la matriz  A-->");
  scanf("%d", &af);
  printf("Numero de columnas de la matriz  A-->");
  scanf("%d", &ac);
  int A[af][ac];
  for(i=0;i<af;i++){
      for(j=0;j<ac;j++){
          printf("Escribe el valor de la matriz 1 (%d, %d)",i+1, j+1);
          scanf("%d", &A[i][j]);
      }
  }
  printf("\n\n\t\t\t Matriz A");
  printf("\n");
  for(i=0;i<af;i++){
      printf("\n\t\t");
      for(j=0;j<ac;j++){
          printf("  %6d  ", A[i][j]);
      }
  }
  printf("\n\n");
  for(i=0;i<af;i++){
      for(j=0;j<ac;j++){
          if (A[i][j]%2==0){
            continue;
          }else{
          printf("este numero es impar: %d\n", A[i][j]);}
      }
  }
  return 0;
}

