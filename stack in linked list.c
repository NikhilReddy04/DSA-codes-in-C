#include<stdio.h>
struct node {
int data;
struct node *next;
};
struct node *top;
void push()
{   int data;
    printf("Enter data to push:");
    scanf("%d",&data);
    struct node *newnode=malloc(sizeof(struct node));
    newnode->next=NULL;
    newnode->data=data;
    newnode->next=top;
    top=newnode;
}
void pop()
{
    printf("%d popped\n",top->data);
    top=top->next;
}
void display()
{
    struct node *print=top;
    while(print!=NULL)
        {   printf("%d ",print->data);
            print=print->next;}
            printf("\n");
}
int main()
{   for(int i=0;i<5;i++)
    push();
    display();
    pop();
    display();

}
