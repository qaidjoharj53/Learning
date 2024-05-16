/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

class Solution
{
public:
    struct ListNode
    {
        int val;
        ListNode *next;
        ListNode() : val(0), next(nullptr) {}
        ListNode(int x) : val(x), next(nullptr) {}
        ListNode(int x, ListNode *next) : val(x), next(next) {}
    };
    ListNode *doubleIt(ListNode *head)
    {
        ListNode *temp = head;
        string n = "";
        while (temp != NULL)
        {
            n += temp->val;
            temp = temp->next;
        }
        int num = stoi(n), i;
        num = num * 2;
        n = to_string(num);
        temp = head;
        for (i = 0; temp != NULL; i++)
        {
            temp->val = n[i];
        }
        if (n[i] != '\0' && temp == NULL)
        {
            temp = new ListNode(n[i]);
        }
        delete[] temp;
        return head;
    }
};