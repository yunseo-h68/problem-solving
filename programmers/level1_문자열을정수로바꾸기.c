#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int solution(const char* s) {
    int i = 0, j = 0;
    int answer = 0;
    for (i = strlen(s) - 1, j = 0; i >= 0; i--) {
        if ('0' <= s[i] && s[i] <= '9') {
            answer += (s[i] - '0') * pow(10, j);
            j++;
        }
    }
    if (s[0]=='-') answer = -answer;
    return answer;
}
