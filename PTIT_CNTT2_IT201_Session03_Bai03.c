#include <stdio.h>
#include <stdlib.h>
void average(int arr[],int size) {
    int count = 0 , sum = 0;
    for(int i=0;i<size;i++){
        if(arr[i] % 2 == 0) {
            sum += arr[i];
            count++;
        }
    }
    int avg = sum/count;
    printf("Tong trung binh cong %d gia tri chan la %d \n",count,avg);
}
int main() {
    int *arr = (int*) malloc (10*sizeof(int));
    int size;
    printf("Moi nhap so luong phan tu: ");
    scanf("%d",&size);
    for(int i=0;i<size;i++){
        printf("Nhap phan tu thu %d : ", i+1);
        scanf("%d",&arr[i]);
    }
    average(arr,size);
    free(arr);
    return 0;
}