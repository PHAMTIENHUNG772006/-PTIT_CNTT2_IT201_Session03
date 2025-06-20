#include <stdio.h>
#include <stdlib.h>
int main(){
    int *arr = (int*) malloc (10*sizeof(int));
    int size;
    printf("Moi nhap so luong phan tu: ");
    scanf("%d",&size);
    for(int i=0;i<size;i++){
        printf("Nhap phan tu thu %d : ", i+1);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<size;i++){
        printf("Phan tu thu %d co gia tri la %d \n",i+1,arr[i]);
    }
    free(arr);
    return 0;
}