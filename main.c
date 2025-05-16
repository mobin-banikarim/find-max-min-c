#include <stdio.h>

int main(){
   int limit;
   int big = 0;
   int little = 0;

   printf("Say the number of numbers you want to import: ");
   scanf("%d", &limit);

   int nums[limit];

   /*
   trace for loop: 
                  0 < 4 (T) - 1 < 4 (T) - 2 < 4 (T) - 3 < 4 (T) - 4 < 4 (F)
   */
   for(int i = 0; i < limit; i++) {
      printf("enter number %d: ", i+1);
      scanf("%d", &nums[i]);
   }
   printf("\n");
   
   for (int i = 0; i < limit; i++) {
      if(nums[i] > big) {
         big = nums[i];
         printf("logs: big = %d\n", big);
      }
   }
   printf("logs: big number trace in done\n");
   
   little = big;
   
   for (int i = 0; i < limit; i++) {
      if(nums[i] < little) {
         little = nums[i];
         printf("logs: short = %d\n", little);
      }
   }
   printf("logs: little number trace in done");

   
   printf("\n.................................\n");
   printf("min number of list = %d\n", little);
   printf("max number of list = %d\n", big);

   return 0;
}