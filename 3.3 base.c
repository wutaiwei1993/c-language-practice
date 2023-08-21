#include <stdio.h>
//base.c -- prints 100 in decimal,octal,and hex

int main(){
    int x = 100;
    printf("decimal = %d , octal = %o , hex = %x\n",x,x,x);
    printf("decimal = %d , octal = %#o , hex = %#x",x,x,x);

return 0;
}
