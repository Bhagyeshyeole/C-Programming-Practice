#include<stdio.h>
#include<math.h>    
int main()
{
    int rlno,s1,s2,s3,tot;
    float per;
    char sname[20],status;

      printf("Enter the name of the student: ");
      scanf("%s", &sname);

      printf("Enter the roll number of the student: ");
      scanf("%d", &rlno); 

      printf("Enter the marks of three subjects: ");
      scanf("%d%d%d", &s1, &s2, &s3);

         tot = s1 + s2 + s3;
         per = tot / 3;

      printf("\n\n Name of the student: %s\n", sname);
      printf("\n Roll number of the student: %d\n", rlno);
      printf("\n Marks in subject 1: %d\n", s1);
      printf("\n Marks in subject 2: %d\n", s2);
      printf("\n Marks in subject 3: %d\n", s3);  
      printf("\n Total marks: %d\n", tot);
      printf("\n Percentage: %f\n", per);

      if(s1>=35 && s2>=35 && s3>=35)
          status = 'P';
      else
          status = 'F';
        printf("\n Status of the student: %c\n", status);
        
        if(status == 'P')
        {
            if(per >=75)
                printf("\n GRADE=A\n");
            else if(per >=60 && per < 75)
                printf("\n GRADE=B\n");
            else if(per >=50 && per < 60)
                printf("\n GRADE=C\n");
            else if(per >=35 && per < 50)
                printf("\n GRADE=D\n");
        }
        return 0;
}
      
