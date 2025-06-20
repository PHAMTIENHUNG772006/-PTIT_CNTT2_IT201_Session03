#include <stdio.h>
#include <stdlib.h>
void

int main() {
    const int MAX_INFINITY = 100000;
    const int MIN_INFINITY = -100000;
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
    int max = MIN_INFINITY;
    int min = MAX_INFINITY;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] > max) {
                max = matrix[i][j];
            }
            if ( min > matrix[i][j] ) {
                min = matrix[i][j];
            }
        }
    }
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    printf("phan tu lon nhat la %d , nho nhat la %d",max,min);
    //giai phong bo nho con
    for (int i = 0; i < rows; i++) {
        free(matrix[i]);
    }
    free(matrix);
    return 0;
}
