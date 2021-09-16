/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
// Implement an optimal approach for implementing two stacks in a single array.
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 20
// Structure for two stacks
struct TwoStacks
{
    char arr[MAX];
    int top1;
    int top2;
}ts;
// Initialise top1 and top2 here
void init(){
    ts.top1 = -1;
    ts.top2 = MAX;
}
// Write the code to push the data in Stack 1
void push1(int data){
    if (ts.top1<ts.top2-1)
    {
        ts.arr[++ts.top1]=data;
    }
    else{
        printf("Stack1 is full!");
    }
}
// Write the code to push the data in Stack 2
void push2(int data){
    if (ts.top1<ts.top2-1)
    {
        ts.arr[--ts.top2] = data;
    }
    else{
        printf("Stack2 is full!");
    }
    
}
// Write the code to pop the data from Stack 1
int pop1(){
    if (ts.top1>0)
    {
        int temp = ts.arr[ts.top1];
        ts.top1--;
        return temp;
    }
    else
    {
        printf("Stack1 is empty!");
    }
}
// Write the code to pop the data from Stack 2

int pop2(){
    if (ts.top2>0)
    {
        int temp = ts.arr[ts.top2];
        ts.top2++;
        return temp;
    }
}

void print_stack1()
{
    printf("Values in stack1 are:\n");
    for (int i = ts.top1; i >=0 ; --i)
    {
        printf("%d\n",ts.arr[i]);
    }   
}
void print_stack2()
{
    printf("Values in stack2 are:\n");
    for (int i = ts.top2; i<MAX ; ++i)
    {
        printf("%d\n",ts.arr[i]);
    }   
}

// Driver Code

int main() {
init();
int opt, element, poppedElement;
while(opt != 0){
printf(">> Which option do you want to choose? \n");
printf(" 1. Push in Stack 1 \n 2. Push in Stack 2 \n 3. Pop from Stack 1 \n 4. Pop from Stack 2 \n 5. Print Stack1\n 6. Print Stack2\n");
scanf("%d", &opt);
switch (opt)

{
case 1:
printf(">> Enter the element you want to push in Stack 1: \n");
scanf("%d", &element);
push1(element);
break;

case 2:
printf(">> Enter the element you want to push in Stack 2: \n");
scanf("%d", &element);
push2(element);
break;

case 3:
poppedElement = pop1();
printf(">> The popped element is %d. \n", poppedElement);
break;

case 4:
poppedElement = pop2();
printf(">> The popped element is %d. \n", poppedElement);
break;

case 5:
print_stack1();
break;

case 6:
print_stack2();
break;

case 0: 
printf("[!!] Exiting");
exit(0);

default:
printf("!!Invalid Input, Try Again");
break;

}
}
return 0;
}