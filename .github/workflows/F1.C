#include<stdio.h>
int main()
{
    float degree_temperature;
    printf("Enter the degree temperature:");
    scanf("%f",& degree_temperature);
    float F=32+(9*degree_temperature)/5;
    printf("conversion of degree temperature into farenheit is:%f",F);
    return 0;

}
