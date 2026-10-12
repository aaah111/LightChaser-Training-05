#include<stdio.h>
int main()
{

    double a;
    double b;
    char op;
    
    while(1)                        //让程序一直运行下去,而不是算完一次就退出
{   printf("请输入计算式如(1+1):");
    scanf("%lf %c %lf",&a,&op,&b);

    switch(op){                      //判断运算符号

        case'+':                     //根据不同符号，做出不同的运算方式
        printf("结果等于:%lf\n",a + b);
        break;
    
        case'-':
        printf("结果等于:%lf\n",a - b);
        break;

        case'*':
        printf("结果等于:%lf\n",a*b);
        break;

        case'/':
        if(b==0)
        {
            printf("除数不能为零");   //要排除除数为0的情况
            break;
        }
        else
        printf("结果等于:%lf\n",a/b);
        break;
    }
}
  return 0;

}
