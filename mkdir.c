#include <stdio.h>
#include <sys/stat.h>
#include <sys/types.h>

int main(int argc, char* argv[]){
int pos;
if(argc!=2)
    printf("Invalid Input Arguments too less or more ");
char* file=argv[1];
pos=mkdir(file,0777);
if(pos==0)
    printf("successful in making the file \n");
else
    printf("Unsuccessfull in making the file \n");
return 0;
}