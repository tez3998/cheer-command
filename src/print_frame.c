#include "print_frame.h"

int print_frame(char *file_path) {
    const int MAX_STR_LENGTH = 256;
    
    int num_line;
    char line[MAX_STR_LENGTH];
    FILE *input_file;

    input_file = fopen(file_path, "r");
    if (input_file == NULL) {
        fprintf(stderr, "Could not open the file: %s", file_path);
        exit(1);
    }

    num_line = 0;
    while (fgets(line, MAX_STR_LENGTH, input_file) != NULL) {
        printf("%s", line);
        num_line++;
    }

    fclose(input_file);
    return num_line;
}