#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

char soma(char a, char b, char c) {
    return ((a - 48) + (b - 48) + (c - 48)) % 2;
}

char resto(char a, char b, char c) {
    return ((a - 48) + (b - 48) + (c - 48)) / 2;
}

char* leftPadddingWithZeros(char *s, int t) {
    char *ss = (char*) calloc(t, sizeof(char));
    for (int i = 0; i < strlen(s); ++i) {
        ss[i] = s[i];
    }
    free(s);
    return ss;
}

char* strrev(char* s) {
    int t = strlen(s);
    char* temp = calloc(t+1, sizeof(1));
    for(int i = 0; i < t; ++i) {
        temp[i] = s[t-1-i];
    }
    return temp;
}

int getValueFromBinary(char* s){
    s = strrev(s);
    
    int x = 1;
    int n = 0;

    for (int i = 0; i < strlen(s); ++i) {
        n += (s[i] - 48) * x;
        x = x << 1;
    }
    return n;
}

char* charBinFromInt(int n) {
    char* s = calloc(100, sizeof(char));
    int i = 0;
    while((n >> i) > 0) {
        s[i] = ((n >> i) & 1) + '0';
        i++;
    }

    char* ss = malloc(sizeof(char) * i);
    memcpy(ss, s, i);
    ss[i] = '\0';
    ss = strrev(ss);
    return ss;
}



char* addBinary(char* a, char* b) {
    char* res = calloc(2000, 1);
    int aa = strlen(a) - 1;
    int bb = strlen(b) - 1;
    int c = 0;
    int i = 0;

    while(aa >= 0 || bb >= 0) {
        int sum = c;

        if (aa >= 0) sum += a[aa--] - 48;
        if (bb >= 0) sum += b[bb--] - 48;

        c = sum > 1;
        res[i++] = (sum % 2) + 48;
    }

    if (c) res[i++] = '1';
    res[i] = '\0';
    res = strrev(res);
    return res;
}

int main(void) {
    
    printf("%s\n", addBinary("11", "1"));
    
    return 0;
}