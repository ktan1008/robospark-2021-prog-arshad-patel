#include <stdio.h>

int depositamt;
int withdrawamt;

struct bank
{
     int accountnum;            // Creation of Structre of a bank
     char name[100];
     int balance;
} a[5];

void check(struct bank a[5], int n)    // 'Check' Function is declared for printing the Data Of Customers Whose Balance is less than 100
{
     int i;
     printf("Customer Details whose Balance < 100\n");

     for (i = 1; i < 5; i = i + 1)
     {
          if (a[i].balance < 100)
          {
               printf("AccountNum \t \t Name \t \t Balance\n");             // For Displaying the Data in Tabular Format
               printf("%d  \t  \t   %s   \t  \t   %d\n", a[i].accountnum, a[i].name, a[i].balance);  
          }
     }
}

void Deposit_Withdraw()          // 'Deposit_Withdraw' Function is declared for the user to have an option whether one wants to Deposit or Withdraw the money
{
     int option = 2;
     printf("Select option 1 for Deposit and option 2 for Withdrawal :\n");
     scanf("%d", &option);
     int depositamt;
     int withdrawamt;

     switch (option)       // Used Switch Case for giving the option to the user to  Deposit or Withdraw
     {
     case 1:

          printf("Please Enter your Account number :\n");
          int i;
          scanf("%d", &i);                                                  
          printf("Enter amount to be deposited :\n");          // If the user enters 1 , he/she will get an option to Deposit money
          scanf("%d", &depositamt);
          a[i].balance = a[i].balance + depositamt;

          printf("The balance after the deposit is:%d\n", a[i].balance);
          break;

     case 2:
          printf("Please Enter your Account number :\n");
          scanf("%d", &i);
          printf("Enter amount to be withdrawn :\n");        // If the user enters 2 , he/she will get an option to Withdraw money
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
     do             // Started a Do-while Loop so that the program does'nt terminates after one transaction 
     {

     for (i = 1; i <= 5; i = i + 1)           // Started a 'for' loop for printing the Details of the customer as the user enters it
     {
          printf("Enter Details of Customer %d\n", i);

          printf("Enter Account Number : ");
          scanf("%d", &a[i].accountnum);
          printf("Enter Name           : ");
          scanf("%s", a[i].name);
          printf("Enter Balance        : ");
          scanf("%d", &a[i].balance);
     }
     printf("AccountNum \t \t Name \t \t Balance\n");    // For Displaying the Data in Tabular Format
     for (i = 1; i <= 5; i++)
     {
          printf("%d \t \t  %s  \t \t %d\n", a[i].accountnum, a[i].name, a[i].balance);
     }
     check(a, 5);                // Function call for Check()
     Deposit_Withdraw();         // Function call for Deposit_Withdraw() 
    }while(temp!=0);

}