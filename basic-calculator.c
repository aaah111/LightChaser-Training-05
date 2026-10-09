#include<stdio.h>
int main()
{

    double a;
    double b;
    char op;
    
    while(1)
{   printf("请输入计算式如(1+1):");
    scanf("%lf %c %lf",&a,&op,&b);

    switch(op){

        case'+':
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
            printf("除数不能为零");
            break;
        }
        else
        printf("结果等于:%lf\n",a/b);
        break;
    }
}
  return 0;

}