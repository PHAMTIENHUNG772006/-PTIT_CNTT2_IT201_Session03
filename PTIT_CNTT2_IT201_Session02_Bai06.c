#include <stdio.h>
#include <stdlib.h>

int main() {
    int m,n;
    printf("Nhan phan so luong phan tu ban dau : ");
    scanf("%d",&n);
    int *arr = (int*) malloc (n * sizeof(int));
    if (n<0||n>100) {
        printf("So luong phan tu khong hop le");
        return 1;
    }
    for (int i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++) {
        printf("phan tu truoc khi cap phat them : %d \n",arr[i]);
    }
    printf("Nhan phan so phan tu them : ");
    scanf("%d",&m);
    int* temp =  (int*) realloc ( arr , (n+m) * sizeof(int));
    if (temp == NULL) {
        printf("Cap phat bo nho that bai\n");
        free(arr);
        return 1;
    }
    arr = temp;
    for (int i=n;i<n+m;i++) {
        scanf("%d",&arr[i]);
    }
    int size = n+m;

    for(int i=0;i<size;i++) {
        printf("phan tu sau khi cap phat them : %d \n",arr[i]);
    }
    free(arr);
    return 0;
}
