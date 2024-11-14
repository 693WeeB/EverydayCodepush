//                                         Same Same But Different
//Question link : https://www.hackerrank.com/contests/b6-final-c/challenges/same-same-but-different-1-1


#include <stdio.h>
#include <string.h>

int min_operations(char s1[], char s2[], char s3[])

{
    int len = strlen(s1), operations = 0;

    for (int i = 0; i < len; i++)
    {
        int count_same = (s1[i] == s2[i]) + (s2[i] == s3[i]) + (s1[i] == s3[i]);

        operations += (count_same == 0) ? 2 : (count_same == 1) ? 1 : 0;
    }

    return operations;
}

int main()
{
    char s1[101], s2[101], s3[101];
    scanf("%s %s %s", s1, s2, s3);
    printf("%d\n", min_operations(s1, s2, s3));
    
    return 0;
}
