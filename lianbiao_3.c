#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
typedef struct Node
{
    int data;
    struct Node*next;

}Node;


bool deleteNode(int n, Node* head)
{
    if (n < 1 || head == NULL)
        return false;
    if (n == 1)
        return false;

    Node* p = head;
    int cnt = 1;
    while (p != NULL && cnt < n - 1)
    {
        p = p->next;
        cnt++;
    }
    if (p == NULL || p->next == NULL)
        return false;

    Node* del = p->next;
    p->next = del->next;
    free(del);
    return true;
}
