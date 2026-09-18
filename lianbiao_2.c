#include <stdio.h>
#include <stdlib.h>
typedef struct LNode
{
    int data;
    struct LNode *next;
}LNode;

int main()
{
    int n;
    scanf("%d",&n);
    LNode* L=(LNode*)malloc(sizeof(struct LNode));
    L->next=NULL;
    for(int i=0;i<n;i++)
    {
       LNode* s=(LNode*)malloc(sizeof(struct LNode));
       printf("请输入你想输入链表中的数");
       scanf("%d ",&s->data);
       s->next=L->next;
       L->next=s;
       
    }
    LNode*p=L->next;
    while(p!=NULL)
    {
        printf("%d",p->data);
        p=p->next;

    }
    return 0;




}