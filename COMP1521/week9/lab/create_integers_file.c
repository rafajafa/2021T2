#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]) {
    if (argc != 4) {
        printf("wrong number of arguments\n");
        return 0;
    }
    FILE *fp;
    fp = fopen(argv[1], "w");
    if (fp == NULL) {
        perror("Error in opening file");
        exit(1);
    }
    int num1 = atoi(argv[2]);
    int num2 = atoi(argv[3]);
    while (num1 <= num2) {
        fprintf(fp, "%d\n", num1);
        num1++;
    } 
    fclose(fp);
    return 0;
}
