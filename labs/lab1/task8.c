#include <stdio.h>
#include <stdlib.h>

void insertInfoToFile(const char* filename, const char* info) {
    FILE* file = fopen("task8.txt", "r+");
    fseek(file, 0L, SEEK_END);
    long fileSize = ftell(file);
    char* buffer = (char*) malloc(fileSize * sizeof(char));
        
    fseek(file, 0L, SEEK_SET);
    fread(buffer, sizeof(char), fileSize, file);
    fseek(file, 0L, SEEK_SET);
    fputs(info, file);
    fputs(buffer, file);
    free(buffer);
    fclose(file); 
}
int main() {   
    const char* filename = "file.txt";
    const char* info = "sdgwegfewgtwe1312.\n";
    insertInfoToFile(filename, info);
    return 0;
}