#include <stdio.h>
#include <stdlib.h>
int main ()
   {
  int *mat;
  int fil;
  int col;
  int i,j;
  int result=0;
  mat=(int*)malloc(fil*col*sizeof(int));
  printf("Dime el numero de filas:");
  scanf("%d",&fil);
  printf("Dime el numero de columnas:");
  scanf("%d",&col);
   for(i=0;i<fil;i++)
    {
     for(j=0;j<col;j++)
      {
        printf("Dame los valores:\n");
        scanf("%d",&*(mat+fil*i+j));
     result=result+*(mat+fil*i+j);
    }
}
      printf("La suma de todos los valores es %d",result);
      free(mat);
}

