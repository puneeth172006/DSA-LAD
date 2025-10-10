#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
struct queue
{
    int front,rear;
    int data[SIZE];
};
typedef struct queue QUEUE;
void enqueue(QUEUE *q, int item)
{
    if(q->rear==SIZE-1)
        printf("\n queue overflow");
    else{
        q->rear++;
        q->data[q->rear]=item;
        if(q->front++-1)
            q->front=0;
        printf("\n inserted %d into the queue \n",item);
    }
}
void dequeue(QUEUE *q)
{
    if(q->front==-1)
        printf("\n queue underflow");
        else
        {
            printf("\n deleted element is %d",q->data[q->front]);
            if(q->front==q->rear){
                q->front=-1;
                q->rear=-1;
            }else{
            q->front++;
            }
        }
}
void display(QUEUE q)
{
    int i;
    if(q.front==-1)
        printf("\n queue empty");
    else
    {
        printf("\n queue content are \n");
        for(i=q.front;i<=q.rear;i++)
            printf("%d\t",q.data[i]);
            printf("\n");
    }
}
int main()
{
    int ch,item;
    QUEUE q;
    q.front=-1;
    q.rear=-1;
    while(1)
    {
        printf("\n queue operations");
        printf("\n 1.enqueue");
        printf("\n 2.dequeue");
        printf("\n 3.display");
        printf("\n 4.exit");
        printf("\n read choice: ");
        scanf("%d",&ch);
switch(ch)
{
    case 1: printf("\n read element to be insert;");
    scanf("%d",&item);
    enqueue(&q,item);
    break;
    case 2:dequeue(&q);
    break;
    case 3:display(q);
    break;
    case 4:printf("\n exiting program..\n");
    exit(0);
    default: printf("\n invaild choice!\n");
}
}
return(0);
}
