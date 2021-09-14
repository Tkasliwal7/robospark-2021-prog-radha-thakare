#include<stdio.h>

struct bank{
 int accno;
 char name[20];
 float balance;
} customer[10];

void inputdata()
{ for(int i=0;i<2;i++)
 {
     printf("enter a information of customer:%d",i+1);
     printf("\nenter the accno:");
     scanf("%d",&customer[i].accno);
     printf("enter the name:");
     scanf("%s",customer[i].name);
     printf("enter the balance:");
     scanf("%f",&customer[i].balance);

 } }
void fun()
{   printf("\n\ncustomer with below 100 balance:");
    for(int i=0;i<2;i++)
  {    if(customer[i].balance<100)
    {
          printf("\naccno:");
     printf("%d",customer[i].accno);
     printf("\nname:");
     printf("%s\n",customer[i].name);
     }
 } }


void deposit(n)
{   float depo;
    for(int i=0;i<2;i++)
    {
        if(customer[i].accno==n)
        {
         printf("\n how many RS u want to deposit:");
         scanf("%f",&depo);
         customer[i].balance+=depo;
        }
    }
    updation(n);
}

void withdrawal(n)
{   float depo;
    for(int i=0;i<2;i++)
    {
        if(customer[i].accno==n)
        {
         printf("\n how many RS u want to withdraw:");
         scanf("%f",&depo);
         if(customer[i].balance<depo)
         {
             printf("\nyou have insufficient balance");
         }
         else
         {
                      customer[i].balance-=depo;
         }

        }
    }
    updation(n);
}

void updation(int n)
{
    for(int i=0;i<2;i++)
    {
        if(customer[i].accno==n)
        {  printf("\ncoustomer name:");
           printf("%s",customer[i].name);
           printf("\ncustomer balance:");
           printf("%f",customer[i].balance);
         }
    }
}

void main()
{
   inputdata();

  char ch='y';int choice,n;
  while(ch=='y'||ch=='Y')
  {
     printf("\nMENU");
      printf("\nenter 0 for withdrawal");
     printf("\nenter 1 for deposit");
     printf("\nenter your choice:");
      scanf("%d",&choice);

     switch(choice)
     {
         case 0:printf("enter the account no:");
                scanf("%d",&n);
                withdrawal(n);
                break;
          case 1:printf("enter the account no:");
                 scanf("%d",&n);
                  deposit(n);
                  break;
          default:printf("wrong choice man");

     }
     printf("\nwant to perform more operation(press y if yes or n if no):");
     scanf(" %c",&ch);
  }



}
