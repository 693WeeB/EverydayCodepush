                         
//                       Jadu Matrix

// Question link : https://www.hackerrank.com/contests/b6-final-c/challenges/jadu-matrix



#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    if (n != m)
    {
    printf("NO\n");
    return 0;
    }
    int isJadu = 1;
    for (int i = 0; i < n; i++)
    {
    for (int j = 0; j < m; j++)
    {
    int value;
    scanf("%d", &value);
    if ((i == j || i + j == n - 1) && value != 1)
    {
    isJadu = 0;
    }
    else if (i != j && i + j != n - 1 && value != 0)
    {
    isJadu = 0;
    }
    }
    }
    printf(isJadu ? "YES\n" : "NO\n");
    return 0;
}
