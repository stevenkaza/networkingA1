{"filter":false,"title":"n5.c","tooltip":"/n5.c","undoManager":{"mark":6,"position":6,"stack":[[{"group":"doc","deltas":[{"action":"insertText","range":{"start":{"row":0,"column":0},"end":{"row":0,"column":3}},"text":"/* "},{"action":"insertText","range":{"start":{"row":0,"column":3},"end":{"row":1,"column":0}},"text":"\n"},{"action":"insertLines","range":{"start":{"row":1,"column":0},"end":{"row":41,"column":0}},"lines":["cis 3210 A1","0761977","Steven Kazavchinski","","*/ ","","#include <unistd.h>","#include <stdlib.h>","#include <stdio.h>","#include <fcntl.h>","#include <sys/types.h>","#include <sys/stat.h>","#include <limits.h>","#include <string.h>","int main(int argc, char * argv[])","{","","\t","\t","        // read file ","    readPipe();","","\t// init pipe ","}","","","","int readPipe(void)","{","    int res; ","    char message[50];","    res = open(\"n2\",O_RDONLY);","    ","    res = read(res,message,50);","    printf(\"The message is %s\\n\",message);","    ","}","/* This function reads a file and copies its contents","   into a buffer string ","*/ "]}]}],[{"group":"doc","deltas":[{"action":"insertText","range":{"start":{"row":28,"column":12},"end":{"row":28,"column":13}},"text":"4"}]}],[{"group":"doc","deltas":[{"action":"insertText","range":{"start":{"row":21,"column":12},"end":{"row":21,"column":13}},"text":"4"}]}],[{"group":"doc","deltas":[{"action":"removeText","range":{"start":{"row":21,"column":12},"end":{"row":21,"column":13}},"text":"4"}]}],[{"group":"doc","deltas":[{"action":"insertText","range":{"start":{"row":21,"column":12},"end":{"row":21,"column":13}},"text":"5"}]}],[{"group":"doc","deltas":[{"action":"removeText","range":{"start":{"row":28,"column":12},"end":{"row":28,"column":13}},"text":"4"}]}],[{"group":"doc","deltas":[{"action":"insertText","range":{"start":{"row":28,"column":12},"end":{"row":28,"column":13}},"text":"5"}]}]]},"ace":{"folds":[],"scrolltop":180,"scrollleft":0,"selection":{"start":{"row":13,"column":19},"end":{"row":13,"column":19},"isBackwards":false},"options":{"guessTabSize":true,"useWrapMode":false,"wrapToView":true},"firstLineState":{"row":14,"state":"start","mode":"ace/mode/c_cpp"}},"timestamp":1413751905467,"hash":"1f5691e00daebc168ff70995060452cb5c600e02"}