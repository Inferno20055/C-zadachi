#pragma once
int countWordsStartingWith(const char* filename, char startChar) {
    FILE* file = fopen(filename, "r");
    if (file == nullptr) {

        return -1;
    }

    int count = 0;
    char word[100];
    while (fscanf(file, "%99s", word) == 1) {
        if (word[0] == startChar) {
            count++;
        }
    }

    fclose(file);
    return count;
}