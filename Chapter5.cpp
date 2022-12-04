//Qa
#include<stdio.h>
int main()
{
    int i, working_hours, over_time;
    float over_time_pay;

    for(i=1;i<=10;i++)
    {
        printf("Enter the working hours of employee no %d: ", i);
        scanf("%d", &working_hours);
        if(working_hours>40)
        {
            over_time = working_hours - 40;
            over_time_pay = over_time * 12.00;
            printf("Employee No %d overtime pay is %.2f\n", i, over_time_pay);
        }
        else
            printf("You have to work for more than 40 hours to get over time pay\n");

    }
}

//Qb
#include <stdio.h>
int main() {
    int i,fact=1,n;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    printf("Factorial of %d is: %d",n,fact);
    return 0;
}

//Qc
#include<stdio.h>
int main()
{
    int i,a,b,power=1;
    printf("Enter number and power: ");
    scanf("%d%d",&a,&b);
    for(i=1;i<=b;i++)
    {
       power=power*a;
    }
    printf("%d raise to %d is %d",a,b,power);
}

//Qd
#include<stdio.h>
int main()
{
    int i;

    for(i=0;i<=255;i++)
    {
       printf("ASCII of %c is  %d\n",i,i);
    }
}
//Qe
#include<stdio.h>
int main()
{
    int i=1,a,b,c;


    while(i<=500)
    {
        a=i%10;
        b=i%100;
        b=(b-a)/10;
        c=i/100;
        if(((a*a*a)+(b*b*b)+(c*c*c))==i)
        {
            printf("%d\n",i);
        }
        i++;

    }
}

//Qf
#include<stdio.h>
int main()
{
    int match_sticks = 21, user_choice, computer_choice;
    while(match_sticks>=1)
    {
        printf("Total Match Sticks: %d\n", match_sticks);
        printf("Pick up the match sticks between (1 to 4): ");
        scanf("%d", &user_choice);

        if(user_choice>4)
        {
            printf("Invalid Entry");
            break;
        }

        computer_choice = 5 - user_choice;

        printf("Computer picks up the %d match sticks.\n", computer_choice);
        match_sticks = match_sticks-user_choice-computer_choice;
        if(match_sticks==1)
        {
            printf("\nYou have been lost via computer.");
            break;
        }
    }
    return(0);
}

//Qg
#include<stdio.h>
int main()
{
    int i=1,pos=0,neg=0,zero=0,num;

    while(i)
    {
        printf("Enter a number: ");
        scanf("%d",&num);

        if(num>0)
        pos++;
        else if(num<0)
        neg++;
        else
        zero++;
        printf("Do you want to continue?\npress 1 for 'yes' and 0 for 'no'");
        scanf("%d",&i);
    }
    printf("positive numbers=%d\nnegative numbers=%d\nNumbers equal to zero=%d",pos,neg,zero);
    return(0);
}

//Qh
#include <stdio.h>
#include<math.h>
int main() {

	int num,num1,octal=0,i=0,j;
	printf("Enter any number: ");
	scanf("%d",&num);
	num1=num;
	while(num!=0)
	{
		j=num%8;
		octal=octal+j*pow(10,i);
		num=num/8;
		i++;
	}
	printf("Octal equivalent of %d is %d",num1,octal);

    return 0;
}

//Qi
#include <stdio.h>
#include<math.h>
int main() {

	int i,num,max,min,n;
	printf("Enter number: ");
	scanf("%d",&num);
	max=min=num;
	while(i)
	{
	   printf("Enter number: ");
	   scanf("%d",&num);
	   if(num>max)
	       max=num;
	   if(num<min)
	       min=num;
	   printf("max=%d min=%d\n",max,min);
	   printf("Do you want to continue?\nPress 1 for yes 0 for no: ");
	   scanf("%d",&i);

	}
	printf("Range %d",(max-min));
    return 0;
}
