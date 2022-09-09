#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define SIZE 10
int stack[SIZE];
int top=-1;
int push(int stack[],int num)
{
    if(top==SIZE-1)
    {
        printf("\nstack underflow");

    }
    else
    {
      top++;
      stack[top]=num;
    }
    return 0;
}
int pop(int stack[])
{
    int data;
    if(top==-1)
    {
        printf("\nstack overflow");
    }
    else
    {
        data=stack[top];
        top--;
        printf("poped item is :%d",data);
    }
    return 0;
}
int display(int stack[])
{
    int i;
     if(top==-1)
    {
        printf("\nstack is empty");
    }
    else{
        printf("content of stack is:");
        for (i=top;i<=0;i--)
        {
            printf("%d\t",stack[i]);
        }
    }
}
int main()
{
    int num,x;
    printf("1.push\n2.pop\n3.display\n4.exit");
    while(1)
    {
        printf("\n'enter your choice:");
        scanf("%d",&x);
        switch(x)
        {
            case 1:
            {
                printf("\nenter the number to push:");
                scanf("%d",&num);
                push(stack,num);
                break;

            }
            case 2:
            {
                pop(stack);
                break;
            }
            case 3:
            {
                display(stack);
                break;
            }
            case 4:
            {
               exit(0);
            }
        }
    }
    getch();
    return 0;
}
