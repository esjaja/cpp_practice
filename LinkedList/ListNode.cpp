#include<iostream>
using namespace std;
class ListNode{
    public:
        int val;
        ListNode* next;

        ListNode(): val(0), next(NULL) {}
        ListNode(int x): val(x), next(NULL) {}
};


int main() {
    ListNode *result = new ListNode(0);
    result->next = new ListNode(8);


    cout << result->val << endl;
    result = result->next;
    cout << result->val << endl;
}


