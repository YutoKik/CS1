#include <stdio.h>

int main(void)
{
    FILE *Test;
    Test = fopen("TXT.txt", "r");
    // printf("Hello");
    /*
    if (Test == NULL) printf("NULL\n");
    else printf("YES\n");
    */

    char inside[100];
    while (fgets(inside, 100, Test))
    {
        printf("%s", inside);
    }

    printf("\nLast line:%s", inside);


    fclose(Test);

    char word[10] = "Pikachu"; // 7 words + 1 for null

    
    return 0;
}
