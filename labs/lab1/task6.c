#include <stdio.h>
int main() {
    FILE *inputFile, *outputFile;
    char inputFilename[] = "task5.txt"; 
    char outputFilename[] = "task6_2.txt"; 
    char buffer[100]; 
    inputFile = fopen(inputFilename, "r");

    outputFile = fopen(outputFilename, "w");

    for (int i = 0; i < 3; i++) {
        if (fgets(buffer, sizeof(buffer), inputFile) != NULL) {
            fputs(buffer, outputFile);
        } else {
            break;
        }
    }

    fclose(inputFile);
    fclose(outputFile);

    printf("Файл %s успешно создан с первыми тремя строками из файла %s\n", outputFilename, inputFilename);

    return 0;
}