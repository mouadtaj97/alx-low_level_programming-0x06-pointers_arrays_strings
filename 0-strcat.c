#include <stdio.h>
#include <string.h>

char *_strcat(char *dest, char *src) {
    char *p = dest + strlen(dest);
    while (*src != '\0') {
        *p++ = *src++;
    }
    *p = '\0';
    return dest;
}

int main() {
    char str1[20] = "Hello";
    char str2[] = " world!";
    _strcat(str1, str2);
    printf("%s\n", str1);
    return 0;
}
