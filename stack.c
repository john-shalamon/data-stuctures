#include <stdio.h>
int stack[100],i,j,choice=0,n,top=-1;
void push();
void pop();
void show();
void main ()
{

    printf("Enter the number of elements in the stack ");
    scanf("%d",&n);
    printf("*********Stack operations using array*********");

printf("\n----------------------------------------------\n");
    while(choice != 4)
    {
        printf("Chose one from the below options...\n");
        printf("\n1.Push\n2.Pop\n3.Show\n4.Exit");
        printf("\n Enter your choice \n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            {
                push();
                break;
            }
            case 2:
            {
                pop();
                break;
            }
            case 3:
            {
                show();
                break;
            }
            case 4:
            {
                printf("Exiting....");
                break;
            }
            default:
            {
                printf("Please Enter valid choice ");
            }
        };
    }
}

void push ()
{
    int val;
    if (top == n )
    printf("\n Overflow");
    else
    {
        printf("Enter the value?");
        scanf("%d",&val);
        top = top +1;
        stack[top] = val;
    }
}

void pop ()
{
    if(top == -1)
    printf("Underflow");
    else
    top = top -1;
}
void show()
{
    for (i=top;i>=0;i--)
    {
        printf("%d\n",stack[i]);
    }
    if(top == -1)
    {
        printf("Stack is empty");
    }
}






first program 
Ex.no:1a ARRAY IMPLEMENTATION OF STACK
AIM:
To implement stack using array in C.
ALGORITHM:
1: Include all the header files and give the maximum size.
2: Define a integer variable 'top' and initialize with '-1'. (int top = -1).
3: Create a one dimensional array ‘a’ with max size.
4: Display the menu with list of operations and perform the operation selected by the user on the stack.
5: Operations:
push - to insert an element into the stack.
pop - to delete an element from the stack
display – to display the elements of a stack.
Exit – to exit from the program

#include<stdio.h>
void main()
{
int a[10]={0},i,top=-1,max=10,n,x;
printf("\n\tMENU\n1.PUSH\n2.POP\n3.DISPLAY\n4.EXIT\n");
do
{
printf("\nEnter your choice\n");
scanf("%d",&n);
switch(n)
{
case 1:
if(top==max-1)
printf("Stack is FULL\n");
else
{
printf("Enter the element\n");
scanf("%d",&x);
a[++top]=x;
}
break;
case 2:
if(top<0)
printf("Stack is Empty\n");
else
printf("The deleted item =%d",a[top--]); break;
case 3:
if(top<0)
printf("The stack is empty\n");
else
{
printf("The elements of the stack are :");
for(i=0;i<=top;i++)
printf("%d\n",a[i]);
}
break;
case 4:
break;
default:
printf("Invalid choice\n");
break;
}
}
  



second program
Ex.no:2 	LINKED LIST IMPLEMENTATION OF LIST
AIM:
To implement List using Linked List in C.
ALGORITHM:
1: Include all the header files.
2: Create a structure LIST with no and *next.
3: Declare all the functions with which operations are done on the linked list.
4: Display the menu with list of operations and perform the operation selected by the user on the linked List.
5: Operations:
create – to create the linked list
insert- to insert an element into the linked list in the chosen position.
deletion - to delete an element from the chosen position in the linked list
display – to display the elements of the linked List.
exit – to exit from the program

PROGRAM:
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<process.h>
#define NULL 0
typedef struct list
{
int no;
struct list *next;
}LIST;
LIST *p,*t,*h,*y,*ptr,*pt;
void create( void );
void insert( void );
void delet( void );
void display ( void );
int j,pos,k=1,count;
void main()
{
int n,i=1,opt;
p = NULL;
printf("%d",sizeof(LIST));
printf( "Enter the no of nodes :\n " );
scanf( "%d",&n );
count = n;
while( i <= n)
{
create();
i++;
}
printf("\nEnter your option:\n");
printf("1.Insert \t 2.Delete \t 3.Display \t 4.Exit\n");
do
{
scanf("%d",&opt);
switch( opt )
{
case 1:
insert();
count++;
break;
case 2:
delet();
count--;
if ( count == 0 )
{
printf("\n List is empty\n");
}
break;
case 3:
printf("List elements are:\n");
display();
break;
case 4:
exit(0);
break;
}
printf("\nEnter your option \n");
}while( opt != 4 );
getch();
}
void create ( )
{
if( p== NULL )
{
p = ( LIST * ) malloc ( sizeof ( LIST ) );
printf( "Enter the element:\n" );
scanf( "%d",&p->no );
p->next = NULL;
h = p;
}
else
{
t= ( LIST * ) malloc (sizeof( LIST ));
printf( "\nEnter the element" );
scanf( "%d",&t->no );
t->next = NULL;
p->next = t;
p = t;
}
display();
}
void insert()
{
t=h;
p = ( LIST * ) malloc ( sizeof(LIST) );
printf("Enter the element to be inserted:\n");
scanf("%d",&p->no);
printf("Enter the position to insert:\n");
scanf( "%d",&pos );
if( pos == 1 )
{
h = p;
h->next = t;
}
else
{
for(j=1;j<(pos-1);j++)
t = t->next;
p->next = t->next;
t->next = p;
t=p;
}
display();
}
void delet()
{
printf("Enter the position to delete:\n");
scanf( "%d",&pos );
if( pos == 1 )
{
h = h->next ;
}
else
{
t= h;
for(j=1;j<(pos-1);j++)
t = t->next;
pt=t->next->next;
free(t->next);
t->next= pt;
}
display();
}
void display()
{
t= h;
while( t->next != NULL )
{
printf("\t%d",t->no);
t = t->next;
}
printf( "\t %d\t",t->no );
}

Output

4Enter the no of nodes :
3
Enter the element:
4
4
Enter the element5
4 5
Enter the element6
4 5 6
Enter your option:
1.Insert 2.Delete 3.Display 4.Exit
1
Enter the element to be inserted:
7
Enter the position to insert:
3
4 5 7 6
Enter your option
3
List elements are:
4 5