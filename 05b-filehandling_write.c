#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *filePrint = fopen("output_print.txt", "w+");
    FILE *fileWrite = fopen("output_write.txt", "wb+");

    int i = 9276553;
    fprintf(filePrint, "%d", i);
    fwrite(&i, sizeof(int), 1, fileWrite);

    fclose(filePrint);
    fclose(fileWrite);
}