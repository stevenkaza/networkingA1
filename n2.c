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

	
	
        // read file 
    readPipe();
    return 0;

	// init pipe 
}



int readPipe(void)
{
    int res; 
    char message[50];
    res = open("n2",O_RDONLY);
    
    res = read(res,message,50);
    printf("The message is %s\n",message);
    
}
/* This function reads a file and copies its contents
   into a buffer string 
*/ 
