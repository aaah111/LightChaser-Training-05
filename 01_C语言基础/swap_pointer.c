#include<stdio.h>
void change(int*p1,int*p2);   //声明函数，提前告诉编译器函数的存在及形参类型

int main()
{   int a = 10;                           //初始化a、b两个变量
    int b = 20;
    printf("交换前a=%d,b=%d",a,b);        //打印a、b交换前的值
    change(&a,&b);                       //引用函数，把a、b的内存地址交给函数
    printf("交换后a=%d,b=%d",a,b);        //打印a、b交换后的值
    return 0;
}

void   change(int*p1,int*p2)   //定义一个函数，变量包括两个指针
{
int mid = *p1;               //*p1表示把指针p1解引用，再把p1指向a的值存到变量mid里
*p1 = *p2;                   //把p2指向的变量b的值，写入 p1 指向的a的内存空间
*p2 = mid;                   //把备份的mid值，写入p2指向的b的内存空间，至此a、b完成互换
}
