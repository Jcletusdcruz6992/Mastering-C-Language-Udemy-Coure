#include <stdio.h>
#include <stdlib.h>

void arrayString(char from[], char to[]);
void charString(char *from, char *to);

int main() {
    char from[] = "James ";
    char to[7] = {'\0'}; // initialize to with enough size
    arrayString(from, to);
    charString(from, to);
    return 0;
}

void charString(char *from, char *to) {
    for (; *from != '\0'; ++from, ++to) {
        *to = *from;
    }
    *to = '\0'; // add null terminator
    printf("to[] = ");
    for (int i=0;to[i]!= '\0'; i++) {
        printf("%c", to[i]);
    }
}

void arrayString(char from[], char to[]) {
    int i;
    for (i = 0; from[i] != '\0'; i++) {
        to[i] = from[i];
    }
    to[i] = '\0'; // add null terminator
    printf("to[] = ");
    for (int i = 0; to[i] != '\0'; i++) {
        printf("%c", to[i]);
    }
}
