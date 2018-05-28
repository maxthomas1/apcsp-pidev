#include <stdio.h>

void main()
{
int arr[100];
int size=sizeof(arr)/sizeof(arr[0]);

for (int i=0; i<size; i++)
{
  arr[i]=i*i;
}

printf("Values in Initial Array:\n");
for (int i=0; i<size; i++)
{
  printf("%d ", arr[i]);
}
printf("\n");

void changearr(int s, int (*arr)[s], int n)
{
  for (int i=0; i<s; i++)
  {
    (*arr)[i]= (*arr)[i]+n;
  }
}

int (*ptrtoarr)[size]= &arr;
changearr(size, ptrtoarr, 5);
printf("Array Values After Function:\n");

for (int i=0; i<size; i++)
{
  printf("%d ", arr[i]);
}
printf("\n");
}
