/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    //My solution
    // ListNode* middleNode(ListNode* head) {
    //     int         size  = 0;
    //     int         half_size = 0;
    //     ListNode    *answer_node = head;

    //     //first iterate throught the list to find the size
    //     for (ListNode *tmp = head; tmp != NULL; tmp = tmp->next)
    //     {
    //         size++;
    //     }

    //     half_size = size / 2;
    //     for (int i = 0; i < half_size; i++)
    //         answer_node = answer_node->next;
    //     return (answer_node);
    // }

    //Second approach (I think its beautiful)
    // ListNode* middleNode(ListNode* head) {
    //     int         size  = 0;
    //     std::vector<ListNode*>   tmp_arr;

    //     //first iterate throught the list to find the size
    //     while (head != NULL)
    //     {
    //         size++;
    //         tmp_arr.push_back(head);
    //         head = head->next;
    //     }
    //     return (tmp_arr[size / 2]);
    // }

    //Third approach (!the best one)
    ListNode* middleNode(ListNode* head) {
        ListNode    *end = head;
        ListNode    *middle = head;

        //first iterate throught the list to find the size
        while (end != NULL && end->next != NULL)
        {
            middle = middle->next;
            end = end->next->next;
        }
        return (middle);
    }
};