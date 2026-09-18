#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
typedef struct Node
{
    int data;
    struct Node*next;

}Node;

void localreverse(Node*head)
{
   if(head==NULL||head->next==NULL)
   {return ;}
   Node*beg=head->next;
   Node*end=head->next->next;
   while(end!=NULL)
   {
     beg->next=end->next;
     end->next=head->next;
     head->next=end;
     end=beg->next;


   }
   return;
}