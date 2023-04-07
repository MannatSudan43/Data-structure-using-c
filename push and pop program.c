//implement a stack using array and develop functions to perform push and pop operations
//HEADER FILEs
#include<stdio.h>
int stack[100],choice,n,i,x ,top;
void push (void);
void pop (void);
void  display(void);
int main(){
top=-1;
printf("\nENTER THE SIZE OF stack[MAX=100]:");
scanf("%d",&n);
printf("\n\tStack operaions using array");
printf("\n\t-----------------");
printf("\n\t 1. Push\n\t 2. Pop \n\t 3.Display \n\t4.Exit");
do{
printf("\n\enter the choice");
scanf("%d",&choice);
switch(choice)
{
case1:
{
push();
break;
}
case2:
{
pop();
break;
case3:
{
display();
break;}
case4:
{
printf("\n\tPLEASE ENTER  A VALID CHOICE(1/2/3/4/)");
}
}
}
while(choice!=4);
return 0;
}
void push(){
if(top>=n-1)
{
printf("\n\tStack is overflow");
}
else{
printf("ENTER A VALUE TO BE PUSHED");
scanf(" %d",&x);
top++;
stack[top]=x;
}
}
void pop()
{
if(top<=-1){
printf("stack is under flow");
}
else
printf("\n\tthe popped elements is %d",stack[top]);
}
}
void display()
{
if(top>=0){
printf("\n the elements in stack\n");
for(i=top;i>=0;i--)
printf("\n%d"stack[i]);
printf("\n press next choice");
}
else
printf("the stack is empty");
}
return 0;
}
