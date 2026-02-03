# include <stdio.h>
# include <stdlib.h>

int p;
int *ans;

int main(void){
printf("%s", "tell me your number");
scanf("%i", &ans);
ans = &p; // the value of x is the memory address of p
int r = rand() % 10;


if (*ans = p){; 
    printf("%s", "success");
}
 else {
    printf("%s", "no.");
    return 0;
  }
 }

 

