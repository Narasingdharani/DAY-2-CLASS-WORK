#include <stdio.h>
#include <string.h>

int main() {
   char str[100], trimmed_str[100];
   int start_index = 0, end_index;

   printf("Enter a string with leading and trailing white spaces: ");
   fgets(str, sizeof(str), stdin);

   // removing leading white spaces
   while(str[start_index] == ' ') {
      start_index++;
   }

   // removing trailing white spaces
   end_index = strlen(str) - 1;
   while(end_index >= 0 && str[end_index] == ' ') {
      end_index--;
   }

   // copying the trimmed string
   int trimmed_index = 0;
   for(int i = start_index; i <= end_index; i++) {
      trimmed_str[trimmed_index] = str[i];
      trimmed_index++;
   }
   trimmed_str[trimmed_index] = '\0';

   printf("String after removing leading and trailing white spaces: \n%s", trimmed_str);

   return 0;
}

