#include <stdio.h>
#include <stdlib.h> // For exit() function
int main()
{
    char netid[1000];
    FILE *fptr;

    if ((fptr = fopen("netid.md", "r")) == NULL)
    {
        printf("Error! opening file");
        // Program exits if file pointer returns NULL.
        exit(1);         
    }

    // reads text until newline 
    fscanf(fptr,"%[^\n]", netid);

    printf("%s", netid);
    fclose(fptr);
    
    return 0;
}
