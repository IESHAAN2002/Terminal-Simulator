#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
   int num;
    char ch;
   FILE *file;
    file = fopen(argv[1],"r");
   if (argc!=2){
       printf("Incorrect Arguments ");
   }
  
  else
  {
    while (!feof(file)) {
        ch = fgetc(file);
        printf("%c", ch);
    }
    fclose(file);  
  }
   return 0;
}