//TQC C Exam-105
#include <stdio.h>
#include <stdlib.h>
 
int main ()
{
    int a, b, c, total;
    double average;
    printf("請輸入第一個整數? ");
    scanf("%d", &a);
    printf("請輸入第二個整數? ");
    scanf("%d", &b);    
    printf("請輸入第三個整數? ");
    scanf("%d", &b);
   
    total = a+b+c;
    average = total/3;
   
    printf("%d+%d+%d=%d\n", a, b, total);
    printf("平均數為%.2f", average);
    system("PAUSE");
    return 0;
}
 
 
//105參考解答
#include <stdio.h>
#include <stdlib.h>
 
int main ()
{
    int a, b, c, total;
    double average;
    printf("請輸入第一個整數? ");
    scanf("%d", &a);
    printf("請輸入第二個整數? ");
    scanf("%d", &b);    
    printf("請輸入第三個整數? ");
    scanf("%d", &c);
   
    total = a+b+c;
    average = (float)total/3;
   
    printf("%d+%d+%d=%d\n", a, b,c, total);
    printf("平均數為%.2f", average);
    system("PAUSE");
    return 0;
}
