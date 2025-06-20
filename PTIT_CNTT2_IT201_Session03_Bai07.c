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

   int k, totalCol = 0 ;
    printf("Moi hang can tinh tong : ");
    scanf("%d",&k);
    for (int i = 0; i < rows; i++) {
        totalCol += matrix[k - 1][i];
    }
    printf("Tong hang %d la %d",k, totalCol);

    return 0;
}