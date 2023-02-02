#include <stdio.h>
int front=-1;
int rear=-1;
int arr[100];
void enqueue()
{int data;
    printf("Enter data:");
    scanf("%d",&data);
    if (front==-1)
    front++;
    rear++;
    arr[rear]=data;
}
void dequeue()
{   printf("%d dequeued\n",arr[front]);
    front++;
}
void display()
{
    for(int i=front;i<=rear;i++)
    {
        printf("%d ",arr[i]);
    }printf("\n");
}
int main()
{
    int i,n;
    printf("Enter 1 to continue and 0 to quit:");
    scanf("%d",&n);
    n=1;
    while(n!=0)
    {
        enqueue();
        printf("Enter 1 to continue and 0 to quit:");
        scanf("%d",&n);
    }
    display();
    dequeue();
    display();
}
