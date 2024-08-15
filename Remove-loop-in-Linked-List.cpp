class Solution {
  public:
    // Function to remove a loop in the linked list.
    void removeLoop(Node* head) {
        Node *curr = head;
        Node *prev = NULL;
        
        unordered_map<Node*,bool>visited;
        
        while(curr){
            if(visited[curr] == 1){
                
                break;
            }
            else{
                visited[curr] = 1;
                prev = curr;
                curr = curr->next;
                
            }
            
        }
        prev->next = NULL;
        
    }
};
