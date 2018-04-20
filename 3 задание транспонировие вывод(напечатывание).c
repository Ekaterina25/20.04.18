#include <stdio.h>
#define ROW 2
#define COL 5
int mat_a[ROW][COL] = 
{
    {0,1,0,3,0},
    {0,6,0,0,0}
    
}; // исходная матрица
int trans_mat[COL][ROW];  // заготовка для транспонированной матрицы (пустая)

void transparacy_matr(int *matA, int *matT, int matArow, int matAcolmn);
void print_matr(int *matriX, int roW, int coL);

int main(void)
{
    int *ptr_matr, *ptr_matr_Tr; // указатели на исходную и заготовку
    ptr_matr = mat_a[0];         // инициализация указателей значениями (нулевые знач. массивов указателей)
    ptr_matr_Tr = trans_mat[0];  //тоже
    print_matr(ptr_matr, ROW, COL);    // печать исходной матрицы правильный порядок строк и столбцов
    transparacy_matr(ptr_matr, ptr_matr_Tr, ROW, COL);  // транспонирование исходной матрицы
 
    printf("\n_____________");    // печать разделителя
 
    print_matr(ptr_matr_Tr, COL, ROW);  // печать транспонированной матрицы (строки ROW меняются местом cо столбцами COL)
    return 0;
    
}
//##################################
void transparacy_matr(int *matA, int *matT, int matArow, int matAcolmn)
{
    int i,j;
    for(i=0; i < matArow; i++)
    for(j=0; j < matAcolmn; j++)
    matT[i + matArow*j] = matA[i*matAcolmn + j];  // индексы идут по столбцам matT, а в matA по строкам
    }
//##################################
void print_matr(int *matriX, int roW, int coL)
{
    int i;
    for(i=0; i < roW*coL; i++)
    {
        if(i%coL==0)
        printf("\n");
        printf("  %d", matriX[i]);
        
    }
    
}