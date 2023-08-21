//badcount.c
#include <stdio.h>
int main(){
    printf("使用資料型態");

    int cost = 12.99;
    float  pi = 3.1415926536;
    printf("cost = %d , pi = %f",cost,pi);
    //執行上面的結果，cost 的結果為12，並非最接近值;
    //第二個會失去些精準度，float只保證前六為有效位數。
    //請使用相同型態的常數來進行指定

return 0;
}
