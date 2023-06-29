class Solution {
  public:
    Node* constructLL(vector<int>& arr) {
        Node* head = NULL;
        head = new Node(arr[0]);
        Node* temp1 = head;
        for(int i = 1; i<arr.size(); i++){
            Node* temp = new Node(arr[i]);
            temp1->next = temp;
            temp1 = temp;
        }
        return head;
    }
};
