#include<stdio.h>

typedef struct         //用 typedef关键字为结构体起别名S，简化后续的声明
{
    char name[100];    //字符数组用于存储姓名
    double score;      //双精度浮点型用于记录成绩
}S;

int main()
{
    S stu1 = {"小明",90};     //定义4个独立的结构体，并直接对它们赋值
    S stu2 = {"小芳",89.5};
    S stu3 = {"小王",91.5};
    S stu4 = {"小亮",99};
    S arr[] = {stu1,stu2,stu3,stu4};      //把4个结构体放入结构体数组中
    int len = sizeof(arr)/sizeof(arr[0]);  // 数组总内存大小 / 数组单元素内存大小==数组长度
    for (int i = 0; i < len; i++)
    {
        printf("姓名:%s,成绩:%lf\n",arr[i].name,arr[i].score);   //通过循环遍历数组，再用arr[i].XXX的形式访问结构体中的变量
    }
    return 0;
}
