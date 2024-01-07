#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <assert.h>


bool isValid(char* s) {
    
    int st = -1;
    char ms[11234];
    int i = 0;
    while(s[i] != '\0') {
        if (s[i] == '(' ||
            s[i] == '{' ||
            s[i] == '['
        ) {
        printf("inserindo %c\n", s[i]);
        st++;
        ms[st] = s[i];
        
        } else {
            if (st == -1) return false;
            if (s[i] == ')') {
                if (ms[st] == '(') {
                    st--;
                } else {
                    return false;
                }
            }

            if (s[i] == '}') {
                if (ms[st] == '{') {
                    st--;
                } else {
                    return false;
                }
            }

            if (s[i] == ']') {
                if (ms[st] == '[') {
                    st--;
                } else {
                    return false;
                }
            }
        }
        i++;
    }

    if (st != -1) return false;

    return true;
}


int main(void) {
    assert(isValid("()()"));
    return 0;
}