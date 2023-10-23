#include <stdio.h>
int main(void){
    FILE *file = fopen("task7_2.txt","r");
    char line[256], lastLine[256];
    while (fgets(line, sizeof(line), file) != NULL) {
        strcpy(lastLine, line);
    }
    fclose(file);
    printf("Последняя строка в файле: %s", lastLine); 
    getchar();return 0;
}