Problem Statement:
A building has x floors with a floor height of y meters each. A ball is dropped from the top of the building. Find the time taken by the ball to reach each floor. 
(Use the formula s = ut+(1/2)at^2  where u and a are the initial velocity in m/sec (= 0) and acceleration in m/sec^2 (= 9.8 m/s^2) and modify the formula for time).

Input format :
The input has 2 integers x and y,
x= number of floors
y= height of the building in meters

Output format :
The output prints the time taken by the ball to reach the floor.
(Rounded to two decimal places).

Refer to the sample output for formatting specifications.

Code constraints :
1 <= x <= 100
1 <= y <= 1000










CODING:
#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    float a=x*y*2;
    float z=a/9.8;
    printf("%0.2f",sqrt(z));
}
