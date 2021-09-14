#include <stdio.h>

int depositamt;
int withdrawamt;

struct bank
{
     int accountnum;
     char name[100];
     int balance;
} a[5];

void check(struct bank a[5], int n)
{
     int i;
     printf("Customer Details whose Balance < 100\n");

     for (i = 1; i < 5; i = i + 1)
     {
          if (a[i].balance < 100)
          {
               printf("AccountNum \t \t Name \t \t Balance\n");
               for (i = 1; i <= 5; i++)
               {
                    printf("%d \t \t  %s  \t \t %d\n", a[i].accountnum, a[i].name, a[i].balance);
               }
          }
     }
}

void Deposit_Withdraw()
{
     int option = 2;
     printf("Select option 1 for Deposit and option 2 for Withdrawal :\n");
     scanf("%d", &option);
     int depositamt;
     int withdrawamt;

     switch (option)
     {
     case 1:

          printf("Please Enter your Account number :\n");
          int i;
          scanf("%d", &i);
          printf("Enter amount to be deposited :\n");
          scanf("%d", &depositamt);
          a[i].balance = a[i].balance + depositamt;

          printf("The balance after the deposit is:%d\n", a[i].balance);
          break;

     case 2:
          printf("Please Enter your Account number :\n");
          scanf("%d", &i);
          printf("Enter amount to be withdrawn :\n");
          scanf("%d", &withdrawamt);
          a[i].balance = a[i].balance - withdrawamt;
          if (a[i].balance < 1)
          {
               printf("The balance is insufficient for the withdrawal");
          }

          printf("The balance after the Withdrawal is: %d\n", a[i].balance);
          break;
     }
}

int main()
{
     int i;
     int temp = 1;
     do
     {

     for (i = 1; i <= 5; i = i + 1)
     {
          printf("Enter Details of Customer %d\n", i);

          printf("Enter Account Number : ");
          scanf("%d", &a[i].accountnum);
          printf("Enter Name           : ");
          scanf("%s", a[i].name);
          printf("Enter Balance        : ");
          scanf("%d", &a[i].balance);
     }
     printf("AccountNum \t \t Name \t \t Balance\n");
     for (i = 1; i <= 5; i++)
     {
          printf("%d \t \t  %s  \t \t %d\n", a[i].accountnum, a[i].name, a[i].balance);
     }
     check(a, 5);
     Deposit_Withdraw();
    }while(temp!=0);

}