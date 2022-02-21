/*
Grading system
By Joy Anne Wairimu Kamau
Feb 2022
MIT license
C89 compiler
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //variables declaration
   float s1, s2, s3, s4, s5, per;
   printf("GRADING SYSTEM! \n");
   //inputs
   printf("Enter marks of 5 subjects:\n");
   scanf("%f %f %f %f %f", &s1,&s2,&s3,&s4,&s5);
   per = (s1 + s2 + s3 + s4 + s5)/5.0;
   //computations
   if(per >= 70)
   {
       printf("GRADE A!\n");
   }
   else
   {
       if(per >= 50)
       {
           printf("GARDE B!\n");
       }

       else
       {
           if(per >= 40)
           {
              printf("GRADE C!\n");
           }
           else
           {
               printf("FAILED!!\n");
           }

       }
   }
}








