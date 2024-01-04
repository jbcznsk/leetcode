#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include <limits.h>

bool isSubsequence(char* s, char* t) {
    
    bool res = true;
    int i = 0;
    int j = 0;

    while(t[i] != '\0' && s[j] != '\0') {
        if (s[j] == t[i]) {
            j++;
        }
        i++;
    }

    if (s[j] != '\0') {
        res = false;
    }

    return res;
}

int main(void) {

    char* a = "abc";
    char* b = "aebec";

    if (isSubsequence(a,b)) {
        printf("sim\n");
    } else {
        printf("nao\n");
    }

    return 0;
}