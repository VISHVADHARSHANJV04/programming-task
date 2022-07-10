#include<stdio.h>	//This is the header file for using scanf and printf functions 
#include<math.h> //This is the header file for using mathematical analytic functions
int main ()
{
 int a[10], b[10];//declaring variables for the task
int c[10], d[10]; 
int n, i, e1 = 0;
 float magnitude, angle, a1, b1, c1;	//Declaring FLoat in the function
 printf ("Enter elements of vector a:\n");	//print function to initiate the program
 for (i = 0; i < 2; i++)	//for loop for scanning elements of two dimensional array function
 scanf ("%d", &a[i]);	//takes input value for a
 printf ("Enter elements of vector b:\n");
for (i = 0; i < 2; i++)	//for loop for scanning elements of two dimensional array
scanf ("%d", &b[i]);
for(i=0;i<2;i++)
  c[i] = a[i] + b[i];		//Addition for vector equation
printf ("Addition vector:");
for (i = 0; i < 2; i++)	// initialize for loop condition for addition vector
 printf ("%d ", c[i]);
 magnitude = sqrt (pow (c[0], 2) + pow (c[1], 2));	//magnitude of vector equation 
printf ("\nMagnitude of c vector is %.3f", magnitude);	//prints magnitude of c vector
 a1 = sqrt (pow (a[0], 2) + pow (a[1], 2));
printf ("\nMagnitude of a vector is %.3f", a1);	//prints magnitude of a vector
b1 = sqrt (pow (b[0], 2) + pow (b[1], 2));
 printf ("\nMagnitude of b vector is %.3f", b1);	//prints magnitude of b vector
 for (i = 0; i < 2; i++)	//for loop for finding angle with vector formula
  {d[i] = a[i] * b[i];
  e1 = e1 + d[i];}
c1 = a1 * b1;
angle = e1 / c1;
printf("\nAngle between the vector is cos θ = %.3f", angle);//prints the angle between the vectors..hence the problem solves
}
//This C Program can be used for problem solving between vectors. It will be more useful for any kind of person and organisation to find sum of two vector as resultant vector,with computation in magnitude and angle of resultant vector.

