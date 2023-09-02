#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int num,n=1,g; 
    srand(time(0));
    num=rand()%100;
    
    do{
        printf("guess the randomly generated number between 1 and 100\n");
        scanf("%d",&g);
        if(g>num)
        {
            printf("Go Low\n");
        }
        else if(g<num)
        {
            printf("Go High\n");
        }
        else{
            printf("Bullseye!\n You took %d attempts.",n);
        }
        n++;
    }
    while(g!=num);
    return 0;
}