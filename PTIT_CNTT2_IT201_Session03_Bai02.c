#include <stdio.h>
int main() {
    int *arr = (int*) malloc (10*sizeof(int));
    int size;
    printf("Moi nhap so luong phan tu: ");
    scanf("%d",&size);
    for(int i=0;i<size;i++){
        printf("Nhap phan tu thu %d : ", i+1);
        scanf("%d",&arr[i]);
    }
    int maxNumber = arr[0];
    for(int i=0;i<size;i++){
      if (arr[i] > maxNumber) {
          maxNumber = arr[i];
      }
    }
    printf("Phan tu lon nhat la %d \n",maxNumber);
    free(arr);
    return 0;
}
