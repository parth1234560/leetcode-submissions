class BrowserHistory {
public:
    struct Node{
        string data;
        Node* prev;
        Node* next;
        Node(string x){
            data=x;
            prev=NULL;
            next=NULL;
        }
    };
    Node* curr;
    BrowserHistory(string homepage) {
        curr=new Node(homepage);

    }
    
    void visit(string url) {
        Node* newNode=new Node(url);
        curr->next=newNode;
        newNode->prev=curr;
        curr=newNode;
    }
    
    string back(int steps) {
        while(steps>0 && curr->prev!=NULL){
            steps--;
            curr=curr->prev;
        }
        return curr->data;
    }
    
    string forward(int steps) {
        while(steps>0 && curr->next!=NULL){
            steps--;
            curr=curr->next;
        }
        return curr->data;
        
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */
