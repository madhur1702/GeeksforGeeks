/*
class Node {
  public:
    int data;
    Node* next;
    Node(int x) { 
        data = x;
        next = NULL;
    }
};
*/
class Solution {
public:
    Node* reverse(Node* head) {
        Node* prev = nullptr;
        while (head) {
            Node* next = head->next;
            head->next = prev;
            prev = head;
            head = next;
        }
        return prev;
    }

    Node* addTwoLists(Node* head1, Node* head2) {
        head1 = reverse(head1);
        head2 = reverse(head2);

        Node* dummy = new Node(0);
        Node* curr = dummy;
        int carry = 0;

        while (head1 || head2 || carry) {
            int sum = carry;
            if (head1) sum += head1->data, head1 = head1->next;
            if (head2) sum += head2->data, head2 = head2->next;

            curr->next = new Node(sum % 10);
            carry = sum / 10;
            curr = curr->next;
        }

        Node* result = reverse(dummy->next);

        while (result && result->data == 0 && result->next)
            result = result->next;

        return result;
    }
};
