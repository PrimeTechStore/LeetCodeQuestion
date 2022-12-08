#include <bits/stdc++.h>
using namespace std;

#define ll long long

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

void insertNode(ListNode *ptr, int key)
{
    ListNode *n = new ListNode(key, ptr->next);
    ptr->next = n;
}

ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
{
    if (list1 == NULL && list2 == NULL)
    {
        return NULL;
    }

    ListNode *list = list1;
    if (list2->val < list1->val)
    {
        list = list2;
    }

    ListNode *now = list;
    while (list1 != NULL && list2 != NULL)
    {
        if (now->val < list1->val && now->val < list2->val)
        {
            if (list1->val == list2->val)
            {
                if (list1->next != NULL && list1->next->val < list2->val)
                {
                    now->next = list1;
                    ListNode *replace = list1->next;
                    list1->next = now->next;
                    now = list1;
                    list1 = replace;
                }
                else
                {
                    now->next = list2;
                    ListNode *replace = list2->next;
                    list2->next = now->next;
                    now = list2;
                    list2 = replace;
                }
            }
            else if (list1->val < list2->val)
            {
                now->next = list1;
                ListNode *replace = list1->next;
                list1->next = now->next;
                now = list1;
                list1 = replace;
            }
            else
            {
                now->next = list2;
                ListNode *replace = list2->next;
                list2->next = now->next;
                now = list2;
                list2 = replace;
            }
        }
        else
        {
            if (list1->val < list2->val)
            {
                now->next = list1;
                ListNode *replace = list1->next;
                list1->next = now->next;
                now = list1;
                list1 = replace;
            }
            else
            {
                now->next = list2;
                ListNode *replace = list2->next;
                list2->next = now->next;
                now = list2;
                list2 = replace;
            }
        }
    }

    if (list1 != NULL)
    {
        now->next = list1;
    }
    else
    {
        now->next = list2;
    }

    return list;
}

int main()
{

    return 0;
}