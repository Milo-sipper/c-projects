#include <stdio.h>
int x; 
int y;
int z;
int main (void){
    printf("%s", "what is the first number you want to compute?");
    scanf("%d", &x);
    printf("%s", "what is the second number you want to compute?");
    scanf("%d", &y);
    printf("%s\n", "what operation do you want to perform?");
    printf("%s\n", "for addition, click 1");
    printf("%s\n", "for subtraction, click 2");
    printf("%s\n", "for multiplication, click 3");
    printf("%s\n", "for division, click 4");
    scanf("%d", &z);
    
    switch (z) {
        case 1:
            printf("%s", "your result is "); 
            printf("%d\n", x + y);
            break;
        case 2:
            printf("%s", "your result is "); 
            printf("%d\n", x - y);
            break;
        case 3: 
            printf("%s", "your result is "); 
            printf("%d\n", x * y);
            break;
        case 4: 
            printf("%s", "your result is "); 
            printf("%d\n", x / y);
            break;
        default: 
        puts("this does not compute");
    }
return 0;
}