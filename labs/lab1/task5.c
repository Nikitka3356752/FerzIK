#include <stdio.h>
int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Usage: ./program_name filename.txt\n");
        return 1;
    }

    FILE *file = fopen(argv[1], "r");
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    char ch;
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }

    fclose(file);
    return 0;
}t 