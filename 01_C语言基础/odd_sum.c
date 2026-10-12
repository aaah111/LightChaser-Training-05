#include<stdio.h>
int main()
{   int sum = 0;
    for(int i=1;i<=100;i++)     //遍历1到100
    {
        if ( i%2!=0)          //判断是否为奇数的方法：对2取余，余数不等于0即为奇数
        {
            sum = sum + i;    //利用循环把奇数逐个相加得到奇数和
        }
     }
printf("奇数和为%d\n",sum);      //把奇数和打印出来
      return 0;
    }
