Problem Statement:
Francis is trying to calculate his water tax by himself.
Take negative inputs as positive values.
Write a program to compute the water tax using the ternary operator.

The water tax slab is as follows:

If units are <100, then the cost is Rs.1 per unit.
If 100>=units<=500, then the cost is Rs.1.5 per unit
If units are> 500, then the cost is Rs.3 per unit.
Input format :
Input consists of the volume of water consumed.

Output format :
The output is the water tax for the volume of water consumed.

Round off to 2 decimal places.



Refer to the sample output for formatting specifications.

Code constraints :
0 <= units <= 100000







CODING
#include<stdio.h>
int main()
{
    float u;
    scanf("%f",&u);
    if (u<100)
        printf("%.2f",u);
    else if (u>500)
        printf("%.2f",u*3);
    else
        printf("%0.2f",u*1.5);
}
