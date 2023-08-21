//typesize.c
#include <stdio.h>
int main(){
    printf("Type \"int\" has a size of %zd bytes.\n",sizeof(int));
    printf("Type \"char\" has a size of %zd bytes.\n",sizeof(char));
    printf("Type \"long\" has a size of %zd bytes.\n",sizeof(long));
    printf("Type \"long long\" has a size of %zd bytes.\n",sizeof(long long));
    printf("Type \"double\" has a size of %zd bytes.\n",
    sizeof(double));        // 璶だ秨よぃ琌砆ま腹癬ㄓ场だ或だ常⊿闽玒
    printf("Type \"long double\" has a size of %zd bytes.\n"
    ,sizeof(long double));  //璶だ秨よぃ琌砆ま腹癬ㄓ场だ或だ常⊿闽玒
return 0;
}
