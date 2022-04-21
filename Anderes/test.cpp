#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<conio.h>


int writeToFile(char[]);
char* readFromFile(char[]);



int main(){
    printf("%s", readFromFile("./test.txt"));
}

int writeToFile(char message[], char path[]){
    FILE *pfile;

    fopen_s(&pfile, path,"w"); 
    fprintf_s(pfile, "%s", message);
    fclose(pfile);
    return 0;
}


char* readFromFile(char path[]){
    FILE *pfile;
    char* message;

    fopen_s(&pfile, path,"r"); 
    fscanf(pfile, "%s", message);
    fclose(pfile);
    return message;
}