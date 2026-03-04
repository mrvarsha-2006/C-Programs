Problem Statement:
Write a C program to find the roots of a Quadratic Equation.  

Input format :
The input consists of the values of a, b, and c.

Output format :
The output prints the roots of the quadratic equation.

If roots don't have any imaginary numbers, print "root1 = [x1] and root2 = [x2]" where x1 and x2 are the 2 roots of the equation.

If roots have the imaginary numbers, print "root1 = [x1]i and root2 = [x2]i" where x1 and x2 are the 2 roots of the equation.

If roots are equal, print "root1 = root2 = [x]" where x is the equal roots of the equation.

Round off the output to two decimal places.



Refer to the sample output for formatting specifications.

Code constraints :
a ≠ 0

-10^3 <= a, b, c <= 10^3









CODING
#include <stdio.h>
#include <math.h>
int main() {
    double a, b, c, discriminant, root1, root2, realPart, imagPart;
    scanf("%lf %lf %lf", &a, &b, &c);
    discriminant = b * b - 4 * a * c;
    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("root1 = %.2lf and root2 = %.2lf", root1, root2);
    }
    else if (discriminant == 0) {
        root1 = root2 = -b / (2 * a);
        printf("root1 = root2 = %.2lf", root1);
    }
    else {
        realPart = -b / (2 * a);
        imagPart = sqrt(-discriminant) / (2 * a);
        printf("root1 = %.2lf+%.2lfi and root2 = %.2lf-%.2lfi", realPart, imagPart, realPart, imagPart);
    }
    return 0;
} 
