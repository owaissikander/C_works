#include<stdio.h>
int main()

{
int a=8;
int b=4;
int c=9;


// Arithmetic operator .
int addition = a+b;
int subtraction =a-b;
int multiple=a*b; 
int division =a/b;
int modulos=a%b;
printf ("Addition :%d\n",addition);
printf("Subtraction :%d\n",subtraction);
printf("Multiple :%d\n",multiple);
printf("Division :%d\n",division);
printf("Modulos:%d\n",modulos);

// increment & decrement operator.

printf("original value of a:%d\n",a);
a++;
printf("value of after increment %d\n",a);
a--;
printf("value of after decrement %d\n",a);


// unary plus & unary minus operator. 

printf("value of a:%d\n",a);
printf("value of b:%d\n",b);
a=+a;
printf("value of a after unary plus:%d\n",a);
b=-b; 
printf("value of b after unary minus:%d\n",b);

// Assignment operator.

printf("is 'a' equal to 'b'? %d\n",a==b);
printf("is 'a' is not equal to 'b'? %d\n",a!=b);
printf("is a greater than be %d \n", a>b);
printf("is 'a' less than 'b'? %d\n",a<b);
printf("is 'a' greater than or equal to 'b'? %d\n", a>=b);
printf("is 'a' less than or equal to 'b'? %d\n",a<=b);


}