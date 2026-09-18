#include <stdio.h>
#include <stdlib.h>
typedef struct LNode
{
    int data;
    struct LNode*next;

}LNode;

// LNode* createNode(int val)
int main()

{
    int n;
    LNode * L=(LNode*)malloc(sizeof(LNode));
    LNode*tail=L;
    L->next=NULL;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        LNode *s=(LNode*)malloc(sizeof(LNode));
        tail->next=s;
        printf("请输入你想输入链表中的数\n");
        scanf("%d",&s->data);
        tail=s;
        tail->next=NULL;

    }
    LNode*p=L->next;
    while(p!=NULL)
    {
        printf("%d",p->data);
        p=p->next;

    }

}



