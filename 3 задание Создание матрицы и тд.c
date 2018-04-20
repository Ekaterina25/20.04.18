// для матрицы 4*4 подходит
#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
int main()
{
    unsigned int *a;  // указатель на массив
    unsigned int i, j, n, m;
    printf("Введите количество строк: ");
    scanf("%d", &n);
    printf("Введите количество столбцов: ");
    scanf("%d", &m);
    // Выделение памяти
    a = (unsigned int*)malloc(n*m* sizeof(unsigned int));
    // Ввод элементов массива
    for (i = 0; i < n; i++ ) 
    {
        for (j = 0; j<m; j++)
        {
            if(i<0 || i>2 || j<0 || j>2)
            a =  rand() %4;
            else  a=0;
            printf("%d ",a);
            
        }
        puts("\n");
        
    }
  // Вывод элементов массива
  for (i = 0; i<n; i++)  // цикл по строкам
  {
      for (j = 0; j<m; j++)  // цикл по столбцам
      {
          printf("%d ", *(a + i*m + j)); 
          
      }
      printf("\n");
      
  }
// Освобождение памяти
for (i = 0; i < n; i++)
{
    free(a[i]);
    
}
free(a);
free(m);
return 0;
    
}
  