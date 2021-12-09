#include <stdio.h>

main()
{   
    int a=5;
    printf("My name is Gopi\n");
    printf("I am in Berhmapur now\n");
    goto twinkle;
    printf("a\n");
    printf("b\n");
    printf("c\n");
    twinkle:
    printf("I am working in IISER Berhampur\n");
    printf("abcd\n");
    printf("efgh\n");
    a=a+5;
    if(a<11)
        goto twinkle;
    printf("no more going back\n");
}