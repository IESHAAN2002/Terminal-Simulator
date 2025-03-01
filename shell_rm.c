#include <stdio.h>

int main(int argc, char* argv[]){
int pos;
if(argc!=2)
    printf("Invalid Input Arguments too less or more ");
pos=remove(argv[1]);
if(pos==0)
    printf("successfull in removing the file \n");
else
    printf("Unsuccessfull in removing the file \n");
return 0;
}