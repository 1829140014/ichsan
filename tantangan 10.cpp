#include<math.h>
#include<stdio.h>
void insertionsort(int arr[], int n)
{
    int i, key,j,isij,isijtmbh1;
    for (i=1; i<n; i++){
        key = arr[i];
        j = i - 1;
        while (j >=0 && arr[j] < key) {
            isij = arr[i];
        arr[j+1] = arr[j];
        j = j - 1;
        }
        arr[j+1] = key;
        isijtmbh1=arr[j+1];
    }
}
void printarray(int arr[], int n)
{
    int i;
    for (i=0; i<n; i++)
        printf("%d ",arr[i]);
    printf ("\n");
}
int main()
{
    int arr[]= {12,11,13,5,6};
    int n = sizeof(arr) / sizeof(arr[0]);

    insertionsort(arr,n);
    printarray(arr,n);

    return 0;
}
