#include<stdio.h>

int main()
{
    int score;
    char grade;
    printf("ENTER YOUR SCORE :");
    scanf("%d",&score);


   grade = 
   score>=90
         ?'A'
         :score>=80
            ?'B'
            :score>=70
               ?'C'
               :score>=50
                  ?'D'
                  :score>=35
                     ?'E'
                     :'F';                                                                  

  

   switch(grade)
   {
        case 'A' : 
            printf("Excellent work %c",grade);
            break;
         case 'B' : 
            printf("Well done %c",grade);
            break;
         case 'C' : 
            printf("Good job %c",grade);
            break;
         case 'D' : 
            printf("you passed but you could better %c",grade);
            break;
         case 'E' : 
            printf("fail %c",grade );
            break;


   }



    return 0;
}