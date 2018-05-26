//102題目
#include <stdio.h>
#include <stdlib.h>
 
int main()
{  
    double a, b;
    printf("請輸入兩個浮點數:");
    scanf("%d %d", a, b);
    total = a+b;
    printf("total=%f", total);
    system("PAUSE");
    return 0;
}
 
 
 
//102解答示範
#include <stdio.h>
#include <stdlib.h>
 
int main()
{  
    float a, b,total;
    printf("請輸入兩個浮點數:");
    scanf("%f %f", &a, &b);
    total = a+b;
    printf("total=%f\n", total);
    system("PAUSE");
    return 0;
}