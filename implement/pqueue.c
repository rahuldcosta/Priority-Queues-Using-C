/*
#====================================================================#
# Author:- Rahul C. Dcosta                             		     #
# File Type :- Main Program File                                     #
# Description:-Implemention of priority Queue			     #
# Date Created:-14/04/2014                             		     #
# Date Modified:-14/04/2014                            		     #
# Copyrights:- All Rights to Scroll_Of_Life Pvt.Ltd    		     #
#====================================================================#
*/
#include <stdio.h>
#include "../include/functionproto.h"

main()
{
int item,item_priority,i=0,j=0;
char value[MAX];
char job[SIZE],name[MAX],phoneno[CONTACT];
printf ( "//---------------------------------------------------------------------------------------------//\nProgram to Schedule appointments of the Public with the Vice-Chancellor/Registrar of Goa university\nAssume That Public Catergories are \nStudent(1)\nTeacher(2)\nParents(3)\nOthers(4)\nEnter name ,Category-id,Job description(purpose of Appointment), and COntact no\n" ) ;
for ( i = 0 ; i < MAXPPL ; i++ )
    {
	printf("\nName:-");
	//scanf(” %[^\n]s”,a);
	scanf(" %[^\n]s",name);
	printf("\nCatergory ID:-");
	scanf("%d",&item_priority);
	printf("\nPurpose:-");
	scanf("\n%[^\n]s",job);
	printf("\nContact No:-");
	scanf("%s",phoneno);
	Enqueue(name,item_priority,job,phoneno);

    }
    printf ( "\n" ) ;
	printf("//---------------------------------------------------------------------------------------------//\nThe Appointment List Has been Generated\n\n");
for ( i = 0 ; i < MAXPPL ; i++ )
    {
	Dequeue(value);
	printf("%d.\t%s\n",i+1,value);
	
    }
	printf("\n\n\n\n\n//---------------------------------------------------------------------------------------------//\nThank you for using my Program\n I hope I helped you achive what you expected from this Program\n Have a Nice Day User\n");
}/*End of main()*/


