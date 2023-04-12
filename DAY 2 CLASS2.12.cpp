#include <stdio.h>

int main() {
   int arr[] = {16, 18, 27, 16, 23, 21, 19};
   int n = sizeof(arr)/sizeof(arr[0]);
   int sum = 0;

   for (int i = 0; i < n; i++) {
      sum += arr[i];
   }

   double average = (double)sum / n;

   printf("Sum = %d\n", sum);
   printf("Average = %.2lf\n", average);

   return 0;
}

