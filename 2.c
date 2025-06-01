#include <stdio.h>

struct ListNode {
    int val;
    struct ListNode *next;
};
int max(int a , int b)
{
    return (a>b)?a:b;
}
int nodeCounter(struct ListNode * l)
{
    if(l==NULL)
    {
        return 0;
    }
    return nodeCounter(l->next)+1;
}
void util(struct ListNode * l,struct ListNode * s,int carry)
{
    if(s->next != NULL)
    {
        int unit=(l->val + s->val)%10;
        carry = (l->val + s->val)/10;
        l->val = unit;
        util(l->next,s->next,carry);
    }
}
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    int n1=nodeCounter(l1);
    int n2=nodeCounter(l2);
    int mx=max(n1,n2);
    if(mx==n1)
    {
        util(l1,l2,0);
        return l1;
    }
    else
    {
        util(l2,l1,0);
        return l2;
    }

}
int main()
{
    
    return 0;
}