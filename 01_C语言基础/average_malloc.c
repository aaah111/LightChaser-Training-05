#include<stdio.h>
#include <stdlib.h>                  // 引入标准库，用于 malloc 和 free 函数//
int main()
{

    double sum = 0.0;
    double average = 0.0;
    int n;                           //定义不同类型的变量//
    int*arr;                         //定义一个int类型的指针//

    printf("请输入数组中元素的个数:");
    scanf("%d",&n);                  //询问数组中有几个数//
    if (n<=0)                        //判断输入的数组长度是否大于0，否则给出提示并退出程序//
    {
       printf("数组的长需大于0");
       return 1;
    }
    
    arr = (int*)malloc(n*sizeof(int));  //申请n个整型大小的连续内存空间，并让arr指向它//
    if(arr == NULL)                     //判断内存空间是否申请成功(数组长度过长就会不成功)//
    {
        printf("内存申请失败\n");
        return 1;
    }
    printf("请依次输入数据\n");          //利用循环让用户依次输入数据//
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
        sum = sum + arr[i];             //利用循环求数组中数据的总和//
    }
    average = sum/n;
    printf("平均值是%f\n",average);        //输出平均值//
    free(arr);                          //释放刚才申请的内存空间//
    arr = NULL;                         //最后把指针置空,防止对后续的程序产生影响//
    return 0;
    
}