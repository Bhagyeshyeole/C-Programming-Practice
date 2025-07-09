//Program to prepare marksheet of students.
#include<stdio.h>
#include<stdlib.h>

main() 
{
    int rlno,s1,s2,s3,tot;
    float per;
    char name[20];

    printf("Enter Roll No: ");
    scanf("%d", &rlno);
    printf("Enter Name of student: ");
    scanf("%s", &name);
    printf("Enter marks of three subject: ");
    scanf("%d %d %d", &s1, &s2, &s3);
    tot = s1 + s2 + s3;     
    per=tot/3;

    printf("\n Total: %d", tot);
    printf("\n Percentage: %f", per);

    return 0;
}   