#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *dataFile = fopen("data.txt", "r");
    
    char buffer[100];
    fgets(buffer, 99, dataFile);

    char name[30], team[10];
    int i1, i2;

    // sscanf(buffer, "%s,%d,%d,%s", name, &i1, &i2, team);
    char *token;
    token = strtok(buffer, ",");
    strcpy(name, token);
    token = strtok(NULL, ",");
    sscanf(token, "%d", &i1);
    token = strtok(NULL, ",");
    sscanf(token, "%d", &i2);
    token = strtok(NULL, ",");
    strcpy(team, token);
    
    printf("%s %d %d %s", name, i1, i2, team);

    fclose(dataFile);
}