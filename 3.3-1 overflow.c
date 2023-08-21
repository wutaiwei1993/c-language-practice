#include <stdio.h>
int main(){
    printf("short int = %d.\n",sizeof(short int));
    printf("int = %d\n",sizeof(int));
    printf("long int = %d\n",sizeof(long int));

    //sizeof(short int) = 2,sizeof(int) = 4,sizeof(long int) = 4.
    printf("\n----------------------------------------------------------------\n");

    int i,n = 1,m;
    for(i = 0;i<sizeof(int)*8-1;i++){
        n = n * 2;
    }
    printf("%d \n",n-1);//求int型別的最大值
    m = n-1;
    //觀察int 型別 溢位的情形

    printf("m +1 = %d,m +2 = %d,m + 3 = %d",m+1,m+2,m+3);

    printf("\n------------------------------------------------------------------\n");

    unsigned int j = 4294967295;
    printf("%d,%d,%d",j+1,j+2,j+3);

    printf("\f");









return 0;
}
