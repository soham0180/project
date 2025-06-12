#include<stdio.h>
int main()
{
    int Num,count =0;
printf("Enter your number : ");
scanf("%d",&Num);
    
if(Num==0)
{
    count=1;
}
else
{
    if(Num < 0)
    Num = -Num;
    while (Num != 0)
    {
       Num = Num / 10;
       count++;
    }
    printf("Total digits : %d\n",count);
    
}
 
    

    
    
}