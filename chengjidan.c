#include<stdio.h>

typedef struct 
{
    char name[100];
    double score;
}S;

int main()
{
    S stu1 = {"小明",90};
    S stu2 = {"小芳",89.5};
    S stu3 = {"小王",91.5};
    S stu4 = {"小亮",99};
    S arr[] = {stu1,stu2,stu3,stu4};
    int len = sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i < len; i++)
    {
        printf("姓名:%s,成绩:%lf\n",arr[i].name,arr[i].score);
    }
    return 0;
}