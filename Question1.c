/*
Problem Description:
Arif came from a very low income family.

However, his father Irfan, sent him abroad for the purpose of studying.

Arif also concentrated well in his learning keeping in mind his father’s poverty.

Arif was excellent in mathematics. 

One day Arif had a computer class and his computer teacher asked him to create a programming logic for the mathematics problem of multiplying two numbers of type float. 

Constraints:
1.00 ≤ var1 ≤ 1000.00
1.00 ≤ var2 ≤ 1000.00

Input Format:
The only line of input has two floating point numbers separated by space

Output Format:
In the only line of output print the result of the multiplication with 4 values after decimal point.
*/

#include <stdio.h>
int main()
{
    float val1, val2, outcome;
    scanf("%f", &val1);
    scanf("%f", &val2);
    outcome = val1 * val2;
    printf("%0.4lf", outcome);
	return 0;
}