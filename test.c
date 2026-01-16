# include <stdio.h>

char name[50];
int age; 
int height; 
void function(char name[], int age, int height ){
    printf("%s %d %d", name, age, height);
    return;
}

int main(void){
    printf("%s", "state your name, age and height");
    scanf("%s %d %d", name, &age, &height);
    function(name, age, height);
return 0;
}





    

    
    
