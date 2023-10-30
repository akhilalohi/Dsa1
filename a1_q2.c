#include<stdio.h>
int main()
{
   // variables
   int score;
   char grade;

   // take score
   printf("Enter score(0-100): ");
   scanf("%d",&score);

   // check score is valid or not
   // score is valid if it belongs to 0-100
   if(score<0 || score>100) {
     printf("Invalid Score");
     // stop execution
     
   }

   // find grade for given score
   // for score >= 90
   if(score>=90 && score<=100)
     printf("excellent");

   // for score>=80 and <90
   else if(score>=80)
    printf("good");
 

   // for score>=70 and <80
   else if(score>=70)
    printf("fair");


   // for score>=60 and <70
   else if(score>=60)
    printf("meets expectation");


   // for score<60
   else if(score>=50)
    printf("below par");

   return 0;
}
