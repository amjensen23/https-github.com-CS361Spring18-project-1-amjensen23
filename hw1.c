 #include <stdio.h>

int main()
{
	char netid [7];
	FILE *fptr;
	if ((fptr = fopen("netid.md","r")) == NULL){
       printf("Error! opening file");
       // Program exits if the file pointer returns NULL.
       exit(1);
    }

    fscanf(fptr,"%s", &netid);
	
	printf(netid);
	fclose(fptr); 
	
	return 0;
}
