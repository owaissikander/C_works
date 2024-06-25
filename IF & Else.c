#include <stdio.h>
int main()

//Muhammad Owais Khan
// Section B
// Roll no 44
{
int rollno,maths,physics,english,totalmarks;
float percentage;
char name[30],fname[30];

printf("Enter your name \n");
scanf("%s", &name);
printf("Enter your father name \n");
scanf("%s", &fname);
printf("Enter your Roll no\n");
scanf("%d",&rollno);
printf("Enter your maths marks\n");
scanf("%d",&maths);
printf("Enter your physics  marks\n");
scanf("%d",&physics);
printf("Enter your english marks\n");
scanf("%d",&english);

totalmarks= maths + physics + english;
percentage = totalmarks *100/300;


printf("----MARKSHEET -----\n");
printf(" Your name is %s\n", name);
printf(" Your father name is %s\n", fname);
printf(" Your Roll no is %d\n", rollno);
printf(" Your total marks is %d\n", totalmarks);
printf(" Your percentage is %f\n", percentage);

if(percentage  <= 80)
{
printf("Grade A1\n");
}
else if (percentage <=70)
{
printf("Grade A\n");
}
else if (percentage <=60)
{
printf("Grade B\n");
}
else 
{   
printf("Fail\n");
}
}

    