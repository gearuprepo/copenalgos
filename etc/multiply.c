// Compile: gcc hello.c -o hello.o
//WIP
#include<stdio.h>
int main(int argc, char* argv[])
{
    printf("Multiply 2 given numbers: \n");
    if(argc==3){
        for(int i=0;i<argc;i++){
            printf("%s\t",argv[i]);
        }
        
    }
}