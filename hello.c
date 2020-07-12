// Compile: gcc hello.c -o hello.o
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    printf("\nPlease enter 2 nos to multiple (max of 5 digits): \n");
    char a[] = "12";
    char b[]= "34";
    naivemultiply(a,b);
}
/*
This is a naive multiple with expected O(n) = n^2, where n is no of digits in a number, assuming same digits
*/
int naivemultiply(char a[], char b[]){
    puts(a);
    for(int i=strlen(a);i>=0;i--){
        for(int j=strlen(b);j>=0;j--){
            //printf("\n%d \n", ((int)(b[j]) * (int)(a[i])));
            printf("Hello");
        }            
    }    

}