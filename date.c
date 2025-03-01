#include<stdio.h>                                              
#include<time.h>   

int main(int argc, char* argv[]){
char* datetime;
if(argc!=1)
    printf("Invalid Input Arguments too less or more ");
time_t dt = time(NULL);
datetime=ctime(&dt);
printf("%s",datetime);
return 0;
}
                                                          
                                                                  