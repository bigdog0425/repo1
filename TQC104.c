//TQC C Exam-104
#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    int unit;
    double price=23.34;
    int total;
    printf("請問您要買幾瓶蘋果汁? ");
    scanf("%d", unit);
    total = unit*price;
    printf("我買了%d瓶100%的蘋果汁\n", unit);
    printf("花了%f元", total);
    system("PAUSE");
    return 0;
}
 
//104解答參考
#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    int unit;
    float price=23.34;
    float total;
    printf("請問您要買幾瓶蘋果汁? ");
    scanf("%d", &unit);
    total = (float)unit*price;
    printf("我買了%d瓶100%%的蘋果汁\n", unit);
    printf("花了%f元", total);
    system("PAUSE");
    return 0;
}