#include <stdio.h>
#include <stdlib.h>

void bubblesort(int arr[],int n);


int main()
{
    int arr[10],i;
    printf("enter the array :\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    bubblesort(arr,5);

    printf("sorted array is \n");
    for(i=0;i<5;i++){
        printf("%d\n",arr[i]);

    }


}
void bubblesort(int arr[],int n){
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<n-1;j++){
            if (arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }

 }
}
