#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int guess()
{   
    int value=rand()%3;
    return value;
}
void game(int inp,int gue)
{
    if(inp==0&& gue==2)
        printf("YOU WON!");
    else if(inp==0&& gue==1)
        printf("YOU LOST!");
    else if(inp==gue)
        printf("TIE!");
    else if(inp==1&& gue==0)
        printf("YOU WON!");
    else if(inp==1&& gue==2)
        printf("YOU LOST!");
    else if(inp==2&& gue==1)
        printf("YOU WON!");
    else if(inp==2&& gue==0)
        printf("YOU LOST!");
}
int main()
{   srand(time(0));
    
    int inp;
    printf("what do you choose: Rock: 0 , Paper: 1, Scissor: 2\n");
    scanf("%d",&inp);
    int guess_=guess();
    game(inp,guess_);

}