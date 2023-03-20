//To sort an array
#include <stdio.h>
int main ()
{
   int num[20];
   int i, j, a, n;
   printf("Enter number of elements in the array to be sorted: ");
   scanf("%d", &n);
   printf("Enter the elements of the array: ");
   for (i = 0; i < n; ++i)
    {
        scanf("%d", &num[i]);
    }
   for (i = 0; i < n; i++)
   {
      for (j = i + 1; j < n; j++)
      {
         if (num[i] > num[j]){
            a = num[i];
            num[i] = num[j];
            num[j] = a;
         }
      }
   }
   printf("The numbers in ascending order is: ");
   for (i = 0; i < n; ++i)
   {
      printf("\n%d", num[i]);
   }
}
