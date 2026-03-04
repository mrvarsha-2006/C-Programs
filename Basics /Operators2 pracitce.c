Problem Statement:
Ramu and Somu are going on a picnic. Ramu packs m apples, n oranges. Somu packs m1 more apples than Ramu and n1 more oranges than Ramu.
If Somu eats x of his apples and Ramu eats y of Somu's oranges, how many apples and oranges are left in total?

Input format :
6 integers in the same line, followed by a space.
m - Apples brought by Ramu.
n - Oranges brought by Ramu.
m1 - Apples brought by Somu.
n1 - Oranges brought by Somu.
x - Apples were eaten by Somu.
y – Oranges were eaten by Ramu.

Output format :
Print two integers representing the remaining Apples and Oranges.

Refer to the sample output for formatting specifications.

Code constraints :
0 <= m, n, m1, n1 <= 1000
0 <= x <= m + m1
0 <= y <= n + n1









CODING
#include<stdio.h>
int main()
{
    int m,n,m1,n1,x,y;
    scanf("%d%d%d%d%d%d",&m,&n,&m1,&n1,&x,&y);
    printf("%d",2*m+m1-x);
    printf("\t%d",2*n+n1-y);
}
