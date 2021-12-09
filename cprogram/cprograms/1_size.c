#include<stdio.h>

int main()
{
    int a=20;
    int so=sizeof(int);
    printf("Size of int %d\n",so);
    printf("size allocated for a %d\n",sizeof(a));
    printf("Int size %d\n",sizeof(int));
    printf("Long Int size %d\n",sizeof(long int));
    printf("Short Int size %d\n",sizeof(short int));
    printf("Char size %d\n",sizeof(char));
    printf("float size %d\n",sizeof(float));
    printf("double size %d\n",sizeof(double));
}