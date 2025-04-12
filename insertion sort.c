#include<stdio.h>
void accept(int x[100], int n)
{
 int i;
 for(i=0;i<n;i++)
 scanf("%d",&x[i]);
}
void insertionSort(int arr[], int n)
{
 int i,key,j;
 for (i=1; i<n;i++)
{
 key=arr[i];
 j = i - 1;
 while (j >= 0 && arr[j] > key)
{
 arr[j + 1] = arr[j];
 j = j-1;
 }
 arr[j+1] = key;
  }
}
void printArray(int arr[], int n)
{
 int i;
 for (i=0; i<n;i++)
 printf("%d ",arr[i]);
 printf("\n");
}
int main()
{
 int arr[100],n;
 printf("enter the size of the array");
 scanf("%d",&n);
 printf("enter the elements of the array");
 accept(arr,n);
 printf("\nArray values before sorting are\n");
 printArray(arr, n);
 insertionSort(arr, n);
 printf("\nArray values after sorting are\n");
 printArray(arr, n);
 return 0;
}

