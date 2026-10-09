#include<stdio.h>
void change(int*p1,int*p2);

int main()
{   int a = 10;
    int b = 20;
    printf("交换前a=%d,b=%d",a,b);
    change(&a,&b);
    printf("交换后a=%d,b=%d",a,b);
    return 0;
}

void   change(int*p1,int*p2)
{
int mid = *p1;
*p1 = *p2;
*p2 = mid;
}