/*  fgets3.c  -- using fgets() */
#include <stdio.h>
#define STLEN 10
int main(void)
{
    char words[STLEN];
    int i;
    char cc;

    puts("Enter strings (empty line to quit):");
    while (fgets(words, STLEN, stdin) != NULL
                          && words[0] != '\n')
    {
        i = 0;
        while (words[i] != '\n' && words[i] != '\0')
            i++;
        // printf("i: %d ", i);
        if (words[i] == '\n')
            words[i] = '\0';
        else // must have words[i] == '\0'
            while ((cc=getchar()) != '\n'){
                // printf("t: %c  ", cc);
                continue;
            }
        puts(words);        
    }
    puts("done");
    return 0;
}
