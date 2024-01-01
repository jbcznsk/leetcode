#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int* mapping(char * input) {

    int *map = (int*) calloc(26, sizeof(int));
    for (int i = 0; i < strlen(input); ++i) {
        map[input[i] - 97]++;
    }
    return map;
}

bool canConstruct(char* ransomNote, char* magazine) {
    int *a = mapping(ransomNote);
    int *b = mapping(magazine);
    bool res = true;
    for (int i = 0; i < 26; ++i) {
        if (b[i]-a[i] < 0) {
            res = false;
            break;
        } 
    }
    free(a);
    free(b);
    return res;
}

int main(void) {
    return 0;    
}
