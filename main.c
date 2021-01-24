#include <stdio.h>
#include <string.h>

void ReverseString(char* str);

int main() {
    char str[255];

    printf("Enter A String To Reverse: ");
    gets(str);

    ReverseString(str);
    return 0;
}

void ReverseString(char* str){
    char r_str[255];
    int i=0, len;

    len = strlen(str) -1;

    while(len >= 0){
        r_str[i] = str[len];
        i++; len--;
    }

    r_str[i] = '\0';

    printf("Reverse String is: ");
    puts(r_str);
}
