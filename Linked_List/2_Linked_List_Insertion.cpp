class Solution{
  public:
    //Function to insert a node at the beginning of the linked list.
    Node *insertAtBegining(Node *head, int x) {
       Node* temp = new Node(x);
       temp->next = head;
       head = temp;
       return head;
    }
    
    
    //Function to insert a node at the end of the linked list.
    Node *insertAtEnd(Node *head, int x)  {
       Node* temp = head;
       if(temp==NULL){
           Node* newNode = new Node(x);
           head = newNode;
           return head;
       }
       while(temp->next!=NULL){
           temp = temp->next;
       }
       Node* newNode = new Node(x);
       temp->next = newNode;
       return head;
    }
};
