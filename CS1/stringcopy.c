#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char* string = "IhateCProgramming";

    char* tocopy;

    tocopy = (char*)calloc(strlen(string), sizeof(char));

    for (int i=0; i<strlen(string); i++) {
        tocopy[i] = string[i];
    }

    printf("%s", tocopy);
    

    return (0);
}