/*
#====================================================================#
# Author:- Rahul C. Dcosta                             		     #
# File Type :- header File        	                             #
# Description:-Implemention of priority Queue			     #
# Date Created:-14/04/2014                             		     #
# Date Modified:-14/04/2014                            		     #
# Copyrights:- All Rights to Scroll_Of_Life Pvt.Ltd    		     #
#====================================================================#
*/
#define MAXPPL 5
#define MAX 50
#define SIZE 200
#define CONTACT 10
struct node
{
char name[MAX],job[SIZE],phoneno[CONTACT];
int priority;
struct node *link;
};

void Enqueue(char name[MAX],int item_priority,char job[SIZE],char phoneno[CONTACT]);
void Dequeue(char name[MAX]);
int isEmpty();


