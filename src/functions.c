/*
#====================================================================#
# Author:- Rahul C. Dcosta                             		     #
# File Type :- Functions  File                                       #
# Description:-Implemention of priority Queue			     #
# Date Created:-14/04/2014                             		     #
# Date Modified:-14/04/2014                            		     #
# Copyrights:- All Rights to Scroll_Of_Life Pvt.Ltd    		     #
#====================================================================#
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "../include/functionproto.h"

//Cerating a queue
struct node *front=NULL;
//End of creation

/*
Function: insert the element into the Queue
Pre-conditions: the Queue exists, element is of appropriate type
Post-conditions: Element is put onto the top of the Queue.
Inputs: a Queue and an element
Outputs: a changed Queue
*/
//ENQUEUE OPERATION//
void Enqueue(char name[MAX],int item_priority,char job[SIZE],char phoneno[CONTACT])
{
struct node *tmp,*p;

tmp=(struct node *)malloc(sizeof(struct node));
if(tmp==NULL)
{
printf("Memory not available\n");
return;
}
strcpy(tmp->name,name);
strcpy(tmp->job,job);
strcpy(tmp->phoneno,phoneno);
tmp->priority=item_priority;
/*Queue is empty or item to be added has priority more than first element*/
if( isEmpty() || item_priority < front->priority )
{
tmp->link=front;
front=tmp;
}
else
{
p = front;
while( p->link!=NULL && p->link->priority<=item_priority )
p=p->link;
tmp->link=p->link;
p->link=tmp;
}
}


/*
Function: remove the top element of the Queue; give a copy of the element back to the user
Pre-conditions: Queue is not empty 
Post-conditions: the top element has been removed from the Queue
Inputs: the Queue
Outputs: the changed Queue, ie top element, has been removed
*/

//DEQUEUE OPERATIONS
void Dequeue(char name[MAX])
{
struct node *tmp;

if( isEmpty() )
{
printf("Queue Underflow\n");
exit(1);
}
else
{
tmp=front;
strcpy(name,tmp->name);
front=front->link;
free(tmp);
}

}
/*
Function: to check and see if queue has no elements or if the quuee is empty
Pre-conditions: Queue is created
Post-conditions: none
Inputs: the Queue
Outputs: status is returned if a queue is empty or not if emtpy 1 is returned else 0
*/
//CHECK TO SEE IF QUEUE IS EMPTY//
int isEmpty()
{
if( front == NULL )
return 1;
else
return 0;

}

