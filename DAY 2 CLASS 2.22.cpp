#include <stdio.h>

int stringLength(char *str) {
    int len = 0;
    while (*str != '\0') {
        len++;
        str++;
    }
    return len;
}

int main() {
    char str[1000];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    int len = stringLength(str);
    printf("Length of string: %d\n", len);
    return 0;
}

