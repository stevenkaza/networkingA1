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
#include <ctype.h>
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
	
	
	
	makeLink(nodeNumber);
        // read file 
	readFile(fileName,buffer); 
        	
	// init pipe 
}


/* This function reads a file and copies its contents
   into a buffer string 
*/ 
// this function creates a named pipe, depending on which node is needed 
int makeLink(int nodeNumber)
{
	char pipeName[5];
	int res; // holding the result of opening/reading/writing to a pipe
	itoa(nodeNumber,pipeName,5);
	/* Attempting to create the pipe */ 
	if (mkfifo(pipeName,0777))
	{
		perror("mkfifo");
		exit(1);
	}
	
	// lets try opening the pipe and writing to it here 
	
	res = open(pipeName,O_WRONLY);
	
	res = write(res,"Link 1 coming in!",50);
	
	
	
	
}
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
