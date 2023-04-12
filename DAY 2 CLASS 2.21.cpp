#include <stdio.h>
#include <string.h>

void reverseString(char *str) {
    int i, j;
    char temp;
    int len = strlen(str);
    j = len - 1;
    for (i = 0; i < j; i++, j--) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

int main() {
    char str[1000];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; 
    reverseString(str);
    printf("Reversed String: %s\n", str);
    return 0;
}

