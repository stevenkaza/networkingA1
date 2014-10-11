/* 
cis 3210 A1
0761977
Steven Kazavchinski

*/ 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char * argv[])
{
	char * fileName = NULL; 
	if (argv[1] != NULL)	
	{
		fileName = malloc(sizeof(char)*strlen(argv[1]+1));
		strcpy(fileName,argv[1]); 
		printf("%s\n",fileName); 


	}


}
