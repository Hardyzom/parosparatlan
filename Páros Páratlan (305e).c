#include <stdio.h>

    int Paros(int a){

        if(a%2==0){
            printf("A szám páros!");
        }
        else if(a%2==1){
            printf("A szám páratlan!");
        }
    return 0;
    }

int main()
{

    int a;
    printf("Adjon meg egy számot!\n");
    scanf("%d",&a);
    Paros(a);

    return 0;
}


#include <stdio.h>

int Páratlan(int a){

        if(a%2==0){
            printf("A szám páros!");
        }
        else if(a%2==1){
            printf("A szám páratlan!");
        }
    return 0;
    }

int main()
{
    
    int a;
    printf("Adjon meg egy számot!\n");
    scanf("%d",&a);
    Páratlan(a);

    return 0;
}

