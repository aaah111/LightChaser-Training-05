#include<stdio.h>
int main()
{   int sum;
    int i;
    for(int i;i<=100;i++)
    {
        if ( i%2!=0)
        {
            sum = sum + i;
        }
     }
printf("奇数和为%d",sum);
      return 0;
    }