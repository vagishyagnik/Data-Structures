
/*
class Node {
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d) {
            data = d;
            left = NULL;
            right = NULL;
        }
};
*/

void levelOrder(Node * root) {
     queue<Node*>q;
     q.push(root);
     q.push(NULL);
     while(!q.empty()) {
        Node* n = q.front();
        q.pop();
        if(n) {
          cout<<n->data<<" ";
          if(n->left)
            q.push(n->left);
          if(n->right)
            q.push(n->right);
          //q.pop();
      }
      else {
          //std::cout<<" ";
          if(!q.empty())
             q.push(NULL);
      }
    }
 }
