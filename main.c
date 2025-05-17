#include <stdio.h>
#include <stdlib.h>

int main(){
   int *nums = NULL;
   int capacity = 5;
   int count = 0;

   nums = malloc(capacity * sizeof(int));
   
   while(1) {
      if(count == capacity) {
         capacity += 5;
         nums = realloc(nums, capacity * sizeof(int));
         if (nums == NULL) {
            printf("Memory allocation failed.\n");
            return 1;
         }
      }
      
      printf("Enter number %d (or -1 to stop): ", count + 1);
      int input;
      scanf("%d", &input);

      if (input == -1) break;

      nums[count++] = input;
   }
   
   int min = nums[0];
   int max = nums[0];
   for (int i = 0; i < count; i++) {
      if(nums[i] > max) {
         max = nums[i];
      }
      if(nums[i] < min) {
         min = nums[i];
      }
   }
   
   printf("\n.................................\n");
   printf("min number of list = %d\n", min);
   printf("max number of list = %d\n", max);

   free(nums);
   nums = NULL;

   return 0;
}