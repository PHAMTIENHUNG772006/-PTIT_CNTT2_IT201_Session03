#include <stdio.h>
#include <stdlib.h>

int main() {
    int rows, cols;
    printf("Moi nhap so hang : ");
    scanf("%d",&rows);
    if (rows < 0 || rows >100) {
        printf("so hang khong hop ke");
    }

    printf("Moi so cot : ");
    scanf("%d",&cols);
    if (cols < 0 || cols >100) {
        printf("so cot khong hop ke");
    }

    int **matrix = malloc (rows  * sizeof(int*));
    for (int i = 0; i < rows; i++) {
        matrix[i] = malloc (cols * sizeof(int));
    }

    // nhap du lieu
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Nhap arr[%d][%d]", i,j);
            scanf("%d",&matrix[i][j]);
        }
    }
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d",matrix[i][j]);
        }
        printf("\n");
    }

    printf("Duong cheo chinh la : \n");
    int sum = 0;
    for (int i=0;i<rows;i++) {
        sum += matrix[i][i];
        printf("%d\n", matrix[i][i]);
    }
    printf("\n");
    printf("Tong duong cheo chinh = %d\n", sum);

   if (rows == cols) {
       printf("Duong phu chinh la : \n");
       int sum = 0;
       for (int i=0;i<rows;i++) {
           sum += matrix[i][rows-1-i];
           printf("%d\n", matrix[i][i]);
       }
       printf("\n");
       printf("Tong duong cheo phu = %d\n", sum);
   }

    return 0;
}