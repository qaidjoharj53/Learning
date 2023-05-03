#include<stdio.h>
int main()
{
    FILE* fp;
    fp = fopen("check.txt", "w+");

    if(fp == NULL)
    {
        printf("File not found!");
        return 0;
    }

    // fprintf(fp, "one\ntwo\nthree\nfour\nfive");

    fclose(fp);
}