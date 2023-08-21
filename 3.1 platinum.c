#include <stdio.h>
int main(){
    float weight;
    float value;

    printf("Are you worth your weight in platinum?\n");
    printf("Let's check it out.\n");
    printf("please enter your weight in pound:");

    //get input from the user
    scanf("%f",&weight);
    //assume platinum is $1700 per ounce.
    //14.5833 converts pounds avd. to ounces troy.
    value = 14.5833 * weight * 1700;

    printf("your weight in platinum is worth $%.2f.\n",value);
    printf("you are easily worth that!If platinum prices drop,\n");
    printf("eat more to maintain your value.");

return 0;
}
