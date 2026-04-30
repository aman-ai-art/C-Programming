#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
srand(time(0));
int die1, choice, result, die2, balance, die, check;
printf("Enter your deposited amount\n");
scanf("%d",&balance);
while(balance>0)
{
    die1=0; die=0;
    die1=(rand()%6)+1;
    die2=(rand()%6)+1;
    die=die1+die2;
    printf("\nEnter your guess\n");
    printf("choose 1 for less than 7\nchoose 2 for equal to 7\nchoose 3 for greater than 7\n");
    scanf("%d",&choice);
    if(choice==1){check=6;}
    else if(choice==2){check=7;}
    else if(choice==3){check=8;}
    else{break;}
    if(check>7 && die>7 || check<7 && die<7)
    {
        printf("\nYou win.\n");
        balance+=1000;
        printf("\nYour balance is %d\n",balance);
    }
    else if( check==7 && die==7 )
    {
        printf("\nYou win.\n");
        balance+=2500;
        printf("\nYour balance is %d\n",balance);
    }
    else
    {
        printf("\nYour lost.\n");
        balance-=1000;
        printf("\nYour balance is %d\n",balance);
    }
    printf("\nEnter 1 for continue and 0 for exit\n");
    scanf("%d",&result);
    if(result==0)
    {
        break;
    }
}
return 0;
}
