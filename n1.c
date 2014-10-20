/*
cis 3210 A1
0761977
Steven Kazavchinski

*/
#include <time.h>
#include <stdlib.h>

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <limits.h>
#include <string.h>
#include <ctype.h>

// function to convert integer to string
void itochar(int x, char *buffer, int radix);
char *strrev(char *str);
int sendMsg(char * fileName,char * nodeNumber);
int main(int argc, char * argv[])
{
	char  nodeNumber[2];
	char fileName[10];
	printf("Please Enter a file name, and node number seperated by a space ex help.txt n2 \n");
	scanf("%s %s",fileName,nodeNumber);
	
        printf("file name = %s\n, node number = %s\n",fileName,nodeNumber);	
	makeLink(fileName,nodeNumber);
        // read file
//	readFile(nodeNumber);
        	
	// init pipe
}


/* This function reads a file and copies its contents
   into a buffer string
*/
// this function creates a named pipe, depending on which node is needed
int makeLink(char * fileName,char pipeName[5])
{
	int res; // holding the result of opening/reading/writing to a pipe
//	itochar(nodeNumber,pipeName,10);
	/* Attempting to create the pipe */
	printf("%s\n",pipeName);
	if (mkfifo(pipeName,0777))
	{
		perror("mkfifo");
		exit(1);
	}
	
	// lets try opening the pipe and writing to it here

	sendMsg(fileName, pipeName);
	
	
	
}
/* function  opens a pipe, reads a file and sends each char at a time */ 

int sendMsg(char * fileName,char * nodeNumber)
{
	int res;
	res = open(nodeNumber,O_WRONLY);
	FILE * fp;
    int c;
    char CHAR; 
    char * packet; 
    int size; 
    packet = malloc(sizeof(char)*5);
	int n;
	fp = fopen(fileName,"r");
	if (fp==NULL)
		return 0;
	while(!feof(fp))
	{

                char * buf;
		char(c) = fgetc(fp);
		if (c!=EOF)
	    {
                if (c >= 0) buf = (char) ((c > CHAR_MAX) ? (c - (UCHAR_MAX + 1)) : c);

	        strcpy(packet,buf);
	    	// send the node number with the char
	    	strcat(packet,nodeNumber);
	        n = rand () %200 + 1; 
	        usleep(n);
		printf("packet = %s\n",packet);
	        res = write(res,packet,1);

	    }
	}
	


}

void itochar(int x, char *buffer, int radix)
{
    int i = 0 , n,s;
    n = s;
    while (n > 0)
    {
        s = n%radix;
        n = n/radix;
        buffer[i++] = '0' + s;
    }
    buffer[i] = '\0';
    strrev(buffer);
}
char *strrev(char *str)
{
      char *p1, *p2;

      if (! str || ! *str)
            return str;
      for (p1 = str, p2 = str + strlen(str) - 1; p2 > p1; ++p1, --p2)
      {
            *p1 ^= *p2;
            *p2 ^= *p1;
            *p1 ^= *p2;
      }
      return str;
}
