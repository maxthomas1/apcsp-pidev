#include <stdio.h>

int arrayAdd( int arr[], int s, int n)
{
	for (int i = 0; i < s; i++)
	{
		arr[i] = arr [i] + n;
	}
}
	
int main()
{
  int arr[100]; 
	 for (int i = 0; i < 100; i++)
		{
			arr[i] = i * i;
 		}
    {
      printf("Array Values After Function:\n");
    }
	arrayAdd(arr, 100, 5);
	for (int i = 0; i < 100; i++)
	{
		printf("%d\n",arr[i]);
	}
}
