/* 
cis 3210 A1
0761977
Steven Kazavchinski

*/ 

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <limits.h>
#include <string.h>
int main(int argc, char * argv[])
{
	char * buffer;   // for storing message contents from file  
	char * nodeNumber = NULL; 
	char * fileName = NULL; 
	if (argv[1] != NULL)	
	{
		fileName = malloc(sizeof(char)*strlen(argv[1]+1));
		strcpy(fileName,argv[1]); 
	}
	else
	{
		fprintf(stdout,"%s","You must specifcy a file name\n");	
	}

	if (argv[2]!=NULL)
	{

		nodeNumber = malloc(sizeof(char)*strlen(argv[2]+1)); 
		strcpy(nodeNumber,argv[2]);
	}
	
	
        // read file 
	readFile(fileName,buffer); 
        	
	// init pipe 
}


/* This function reads a file and copies its contents
   into a buffer string 
*/ 

int readFile(char * fileName, char * buffer)
{
	FILE * fp; 
        char c;

	fp = fopen(fileName,"r");  
	if (fp==NULL)
		return 0; 
	while(!feof(fp))
	{
		c = fgetc(fp);
		if (c!=EOF) 		
		    printf("%c",c); 
	}
	


}
