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

bool isAnagram(char* s, char* t) {
    int *a = mapping(s);
    int *b = mapping(t);
    bool res = true;
    for (int i = 0; i < 26; ++i) {
        if (b[i]-a[i] != 0) {
            res = false;
            break;
        } 
    }
    free(a);
    free(b);
    return res;
}