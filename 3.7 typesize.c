//typesize.c
#include <stdio.h>
int main(){
    printf("Type \"int\" has a size of %zd bytes.\n",sizeof(int));
    printf("Type \"char\" has a size of %zd bytes.\n",sizeof(char));
    printf("Type \"long\" has a size of %zd bytes.\n",sizeof(long));
    printf("Type \"long long\" has a size of %zd bytes.\n",sizeof(long long));
    printf("Type \"double\" has a size of %zd bytes.\n",
    sizeof(double));        // �u�n���}���a�褣�O�Q�޸���_�Ӫ������A�������S���Y
    printf("Type \"long double\" has a size of %zd bytes.\n"
    ,sizeof(long double));  //�u�n���}���a�褣�O�Q�޸���_�Ӫ������A�������S���Y
return 0;
}
