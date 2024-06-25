#include<stdio.h>
#include<string.h>
int main()
{
int i=1;
int c;
char a[]="hello";
char b[5];
while(i<=3){
scanf("%s", &b);
c=strcmp(b,a);
if(c==0){
printf("match");
}
break;
else
printf("Not match");

i++;
}
}