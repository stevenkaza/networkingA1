{"changed":true,"filter":false,"title":"n4.c","tooltip":"/n4.c","value":"/* \ncis 3210 A1\n0761977\nSteven Kazavchinski\n\n*/ \n\n#include <unistd.h>\n#include <stdlib.h>\n#include <stdio.h>\n#include <fcntl.h>\n#include <sys/types.h>\n#include <sys/stat.h>\n#include <limits.h>\n#include <string.h>\nint main(int argc, char * argv[])\n{\n\n\t\n\t\n        // read file \n    readPipe4();\n\n\t// init pipe \n}\n\n\n\nint readPipe4(void)\n{\n    int res; \n    char message[50];\n    res = open(\"n2\",O_RDONLY);\n    \n    res = read(res,message,50);\n    printf(\"The message is %s\\n\",message);\n    \n}\n/* This function reads a file and copies its contents\n   into a buffer string \n*/ \n","undoManager":{"mark":-1,"position":2,"stack":[[{"group":"doc","deltas":[{"action":"insertText","range":{"start":{"row":0,"column":0},"end":{"row":0,"column":3}},"text":"/* "},{"action":"insertText","range":{"start":{"row":0,"column":3},"end":{"row":1,"column":0}},"text":"\n"},{"action":"insertLines","range":{"start":{"row":1,"column":0},"end":{"row":41,"column":0}},"lines":["cis 3210 A1","0761977","Steven Kazavchinski","","*/ ","","#include <unistd.h>","#include <stdlib.h>","#include <stdio.h>","#include <fcntl.h>","#include <sys/types.h>","#include <sys/stat.h>","#include <limits.h>","#include <string.h>","int main(int argc, char * argv[])","{","","\t","\t","        // read file ","    readPipe();","","\t// init pipe ","}","","","","int readPipe(void)","{","    int res; ","    char message[50];","    res = open(\"n2\",O_RDONLY);","    ","    res = read(res,message,50);","    printf(\"The message is %s\\n\",message);","    ","}","/* This function reads a file and copies its contents","   into a buffer string ","*/ "]}]}],[{"group":"doc","deltas":[{"action":"insertText","range":{"start":{"row":28,"column":12},"end":{"row":28,"column":13}},"text":"4"}]}],[{"group":"doc","deltas":[{"action":"insertText","range":{"start":{"row":21,"column":12},"end":{"row":21,"column":13}},"text":"4"}]}]]},"ace":{"folds":[],"scrolltop":377,"scrollleft":0,"selection":{"start":{"row":21,"column":13},"end":{"row":21,"column":13},"isBackwards":false},"options":{"guessTabSize":true,"useWrapMode":false,"wrapToView":true},"firstLineState":{"row":17,"state":"start","mode":"ace/mode/c_cpp"}},"timestamp":1413749508719}