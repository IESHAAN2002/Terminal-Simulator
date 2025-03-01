#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdbool.h>
#include <dirent.h>
#include <errno.h>
#include <pthread.h>
#include <sys/wait.h>
#define MAX_LEN 100

void checkValues(char* arrayInput[]){
  // printf("Hel");
    if(strcmp(arrayInput[0], "cd")==0){
      // printf("Hello");
      if(strcmp(arrayInput[1], "..")==0 || (arrayInput[1]==NULL))
        {
          int x=0;
          x=chdir("..");
        }
      else{
        if(strcmp(arrayInput[1], "-L")==0 || strcmp(arrayInput[1], "-P")==0)             {  
            int y=0;
            y=chdir(arrayInput[2]);
          }
        }
    }

    else if(strcmp(arrayInput[0], "echo")==0){
      // printf("ASD");
        if((strcmp(arrayInput[1], "-n")==0)){
            int i=2;
            while(arrayInput[i]!=NULL){
                printf("%s ",arrayInput[i]);
                i++;
            }
        }
        else if((strcmp(arrayInput[1], "-E")==0)){
            
            int i=2;
            while(arrayInput[i]!=NULL){
                printf("%s ",arrayInput[i]);
            }
            printf("\n"); 
        }
        else
        {
          int i=1;
          while(arrayInput[i]!=NULL){
          printf("%s ",arrayInput[i]);
          i++;
          }
          printf("\n");
        }
    }

    else if((strcmp(arrayInput[0], "pwd")==0)){
      char wd[1000];
      // printf("%s",arrayInput[1]);
      
      if((strcmp(arrayInput[1], "-L")==0)){
        // printf("H1");
          printf("%s\n",getcwd(wd,1000));
      }
      else if((strcmp(arrayInput[1], "-P")==0)){
          printf("%s\n",getcwd(wd,1000));
      }
      else {
        // printf("H2");
        printf("%s\n",getcwd(wd,1000));
      }
      // else{
      //     printf("Error invaild input ");
      // }
      
    }
    else if((strcmp(arrayInput[0], "ls")==0)){
        int x=fork();
        if(x>0){
            // parent process started 
            printf("Parent process ");
            wait(NULL);
            // waiting for the child process
        }
        else if(x==0){
            // child process has started 
            printf("Child process ");
            execv("./ls",arrayInput);
            // child process has called the exec 
        }
        else{
            printf("Fork failed");
        }
    }
    else if((strcmp(arrayInput[0], "cat")==0)){
        int x=fork();
        if(x>0){
            // parent process started 
            printf("Parent process ");
            wait(NULL);
            // waiting for the child process
        }
        else if(x==0){
            // child process has started 
            printf("Child process ");
            execv("./cat",arrayInput);
            // child process has called the exec 
        }
        else{
            printf("Fork failed");
        }
    }
    else if((strcmp(arrayInput[0], "date")==0)){
        int x=fork();
        if(x>0){
            // parent process started 
            printf("Parent process ");
            wait(NULL);
            // waiting for the child process
        }
        else if(x==0){
            // child process has started 
            printf("Child process ");
            execv("./date",arrayInput);
            // child process has called the exec 
        }
        else{
            printf("Fork failed");
        }
    }
    else if((strcmp(arrayInput[0], "rm")==0)){
        int x=fork();
        if(x<0){
            printf("Fork failed");
            exit(1);
            // parent process started 

            // waiting for the child process
        }
        else if(x==0){
            // child process has started 
            printf("Child process ");
            execv("./shell_rm",arrayInput);
            // child process has called the exec 
        }
        else{
          wait(NULL);
            printf("Parent process ");
            
        }
    }
    else if((strcmp(arrayInput[0], "mkdir")==0)){
        int x=fork();
        if(x>0){
            // parent process started 
            printf("Parent process ");
            wait(NULL);
            // waiting for the child process
        }
        else if(x==0){
            // child process has started 
            printf("Child process ");
            execv("./mkdir",arrayInput);
            // child process has called the exec 
        }
        else{
            printf("Fork failed");
          exit(1);
        }
    }
    // else{
    //     printf("Invalid Input !!!");
    // }
  }

 // void checkValues_t(char arrayInput[]){
 //    if(arrayInput[0]=="cd"){
 //        if(sizeof(arrayInput)==2){
 //            chdir(arrayInput[1]);
 //        }
 //        else{
 //            if(arrayInput[1]=="-L" || arrayInput[1]=="-P"){
 //                chdir(arrayInput[2]);
 //            }
 //        }
 //    }

 //    else if(arrayInput[0]=="echo"){
 //        if(arrayInput[1]=="-n"){
 //            for(int i=2;i<sizeof(arrayInput);i++){
 //                if(i==sizeof(arrayInput)-1){
 //                    printf(arrayInput[i]);
 //                }
 //                printf(arrayInput[i]+" ");
 //            }
 //        }
 //        else if(arrayInput[1]=="-E"){
 //           for(int i=2;i<sizeof(arrayInput);i++){
 //                if(i==sizeof(arrayInput)-1){
 //                    printf(arrayInput[i]);
 //                }
 //                printf(arrayInput[i]+" ");
 //            }
 //            printf("\n"); 
 //        }
 //    }

 //    else if(arrayInput[0]=="pwd"){
 //        if(sizeof(arrayInput)==1){
 //            char wd[1000];
 //            printf(getcwd(wd,sizeof(wd)));
 //        }
 //        else{
 //            if(arrayInput[1]=="-L"){
 //                char wd[1000];
 //                printf(getcwd(wd,sizeof(wd)));
 //            }
 //            else if(arrayInput[1]=="-P"){
 //                char wd[1000];
 //                printf(getcwd(wd,sizeof(wd)));
 //            }
 //            else{
 //                printf("Error invaild input ");
 //            }
 //        }
 //    }

 //    // handle_thread(){

 //    // }

 //    else if(arrayInput[0]=="ls"){
 //        pthread_t p;
 //        pthread_create(&p,NULL,&thread_f,NULL);
 //        handle_thread(arrayI23.nput)
 //        if(x>0){
 //            // parent process started 
 //            printf("Parent process ");
 //            wait();
 //            // waiting for the child process
 //        }
 //        else if(x==0){
 //            // child process has started 
 //            printf("Child process ");
 //            execv("./ls",arrayInput);
 //            // child process has called the exec 
 //        }
 //        else{
 //            printf("Fork failed");
 //        }
 //    }
 //    else if(arrayInput[0]=="cat"){
 //        int x=fork();
 //        if(x>0){
 //            // parent process started 
 //            printf("Parent process ");
 //            wait();
 //            // waiting for the child process
 //        }
 //        else if(x==0){
 //            // child process has started 
 //            printf("Child process ");
 //            execv("./cat",arrayInput);
 //            // child process has called the exec 
 //        }
 //        else{
 //            printf("Fork failed");
 //        }
 //    }
 //    else if(arrayInput[0]=="date"){
 //        int x=fork();
 //        if(x>0){
 //            // parent process started 
 //            printf("Parent process ");
 //            wait();
 //            // waiting for the child process
 //        }
 //        else if(x==0){
 //            // child process has started 
 //            printf("Child process ");
 //            execv("./date",arrayInput);
 //            // child process has called the exec 
 //        }
 //        else{
 //            printf("Fork failed");
 //        }
 //    }
 //    else if(arrayInput[0]=="rm"){
 //        int x=fork();
 //        if(x>0){
 //            // parent process started 
 //            printf("Parent process ");
 //            wait();
 //            // waiting for the child process
 //        }
 //        else if(x==0){
 //            // child process has started 
 //            printf("Child process ");
 //            execv("./rm",arrayInput);
 //            // child process has called the exec 
 //        }
 //        else{
 //            printf("Fork failed");
 //        }
 //    }
 //    else if(arrayInput[0]=="mkdir"){
 //        int x=fork();
 //        if(x>0){
 //            // parent process started 
 //            printf("Parent process ");
 //            wait();
 //            // waiting for the child process
 //        }
 //        else if(x==0){
 //            // child process has started 
 //            printf("Child process ");
 //            execv("./mkdir",arrayInput);
 //            // child process has called the exec 
 //        }
 //        else{
 //            printf("Fork failed");
 //        }
 //    }
 //    else{
 //        printf("Invalid Input !!!");
 //    }


// }

int main(){
    // Main Loop of the shell
    printf("Welcome to Shell \n");
    
    while(true){
        printf("Iesh> ");
        char inputValues[MAX_LEN];
        char *y=fgets(inputValues,MAX_LEN,stdin);
        // printf("%s",inputValues);
        char** arrayInput;
        arrayInput=malloc(1000 * sizeof(char*));
        char* piece = strtok(inputValues," ");
        int i=0;
        while (piece != NULL) {
          // printf("%s\n", piece);
          piece[strcspn(piece, "\n")] = 0;
          // printf("%s",arrayInput[0]);
          arrayInput[i]=piece;
          // printf("%s",arrayInput[0]);
          piece = strtok(NULL, " ");
          i++;
         
          // int j=strlen(piece);
          // int result= strcmp (piece[j], "\n");
        //   if (result==0){
        //         // if(piece[j-1]=="&t")
        //         //     checkValues_t(arrayInput);
        //         //     break;
        //         checkValues(arrayInput);
        //         break;
        // }
        // for(int i=0;i<100;i++){
        //     arrayInput[i]=piece;
        //     piece=strtok(NULL," ");
            
        //     }
        }
        checkValues(arrayInput);
        // printf("%s\n",inputValues);
        printf("%s\n",arrayInput[0]);
      exit(0);
    
    }
  
  return 0;
}

