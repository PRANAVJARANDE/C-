class Solution
{
public:

    int lengthh(ListNode *head)
    {
            ListNode* temp=head;
            int k=0;
            while(temp!=NULL)
            {
                k++;
                temp=temp->next;
            }

        return k;
    }




    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
    {
        int l1=lengthh(headA);
        int l2=lengthh(headB);
        int d;
        ListNode *ptr1;
        ListNode *ptr2;

        if(l1>l2)
        {
            ptr1=headA;
            ptr2=headB;
            d=l1-l2;
        }
        else
        {
            ptr1=headB;
            ptr2=headA;
            d=l2-l1;
        }

        while(d>0)
        {
            ptr1=ptr1->next;
            d--;
        }
        while(ptr1!=ptr2)
        {
            ptr1=ptr1->next;
            ptr2=ptr2->next;
        }

        return ptr1;


    }
};
