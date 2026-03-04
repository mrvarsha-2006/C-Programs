Problem Statement:
Sasikumar is a mathematics teacher and he is preparing a question paper of his own, So he needs to calculate the answers for the questions he prepared without any errors. As he is busy with his work he has no time to make it.
Write the program and trace the output for the following expressions:
x = a + b * 5 / 4 + c % 3 * 5
y = u > v ? u : v 
z = ++i && ++j && ++k
  
Input format :
The 1st line consists of 3 integer inputs, a, b, and c

The 2nd line consists of 2 integer inputs, u, v

The 3rd line consists of 3 integer inputs, i, j, and k

Output format :
The output consists of the answers for the equations after substituting their corresponding values.

x=[ans1] where ans1 is the resultant of the equation

y=[ans2] where ans2 is the resultant of the equation

z=[ans3] where ans3 is the resultant of the equation




    
#include<stdio.h>
int main()
{
    int a,b,c,u,v,i,j,k;
    scanf("%d%d%d%d%d%d%d%d",&a,&b,&c,&u,&v,&i,&j,&k);
    printf("x=%d",a+b*5/4+c%3*5);
    printf("\ny=%d",u>v?u:v);
    printf("\nz=%d",++i&&++j&&++k);
    
}
