#include<stdio.h>    // 文件包含，将stdio.h文件包含在当前源程序文件中，stdio.h为标准输入输出库文件，printf和scanf的使用均需要该文件。在编译前把<stdio.h>中的信息“包含”到程序中。

int main(void)    // main函数，每一个c程序有且只有一个main函数，代码从main函数开始执行
{
    printf("Hello World");    // 打印输出双引号的内容
    return 0;    // 该函数为整型int，需要返回一个整数
}
