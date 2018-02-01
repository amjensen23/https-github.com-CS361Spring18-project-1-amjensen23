 #include <stdio.h>

int main()
{
	char* netid [7];
	FILE *fptr;
	if ((fptr = fopen("netid.md","r")) == NULL){
       printf("Error! opening file");
       // Program exits if the file pointer returns NULL.
    }

    fscanf(fptr,"%s", &netid);
	
	printf("%s",netid);
	fclose(fptr); 
	
	return 0;
}
