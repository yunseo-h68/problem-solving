#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char *solution(int n)
{
    char *answer = (char *)malloc(3 * n);
    answer[0] = '\0';
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            strcat(answer, "수");
        }
        else
        {
            strcat(answer, "박");
        }
    }
    return answer;
}
