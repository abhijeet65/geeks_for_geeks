#include <iostream>
#include <vector>
#include <queue>

#define INT_MAX 10e6

using namespace std;
 
// A Binary Tree Node
struct node {
    int data;
    struct node *left, *right;
};
 typedef struct node* Node; 
// return height of tree
int heightoftree(Node root)
{
 
    if (root == NULL)
        return 0;
 
    int left = heightoftree(root->left);
    int right = heightoftree(root->right);
 
    return ((left > right ? left : right) + 1);
}
 
// Inorder Traversal
// Search minimum element in each level and 
// store it into vector array.
void printPerLevelMinimum(Node root, 
                  vector<int>& res, int level)
{
     
    if (root != NULL) {
 
        printPerLevelMinimum(root->left,
                              res, level + 1);
 
        if (root->data < res[level])
            res[level] = root->data;
 
        printPerLevelMinimum(root->right, 
                              res, level + 1);
    }
}
 
void perLevelMinimumUtility(Node root)
{
     
    // height of tree for the size of 
    // vector array
    int n = heightoftree(root), i;
 
    // vector for store all minimum of 
    // every level
    vector<int> res(n, INT_MAX);
 
    // save every level minimum using 
    // inorder traversal
    printPerLevelMinimum(root, res, 0);
 
    // print every level minimum
    cout << "Every level minimum is\n";
    for (i = 0; i < n; i++) {
        cout << "level " << i <<" min is = "
                            << res[i] << "\n";
    }
}
void printPerLevelMinimum2(Node root, 
                  vector<int>& res, int level)
{
     
    if (root != NULL) {
 
        printPerLevelMinimum(root->left,
                              res, level + 1);
 
        if (root->data > res[level])
            res[level] = root->data;
 
        printPerLevelMinimum(root->right, 
                              res, level + 1);
    }
}
 
void perLevelMinimumUtility2(Node root)
{
     
    // height of tree for the size of 
    // vector array
    int n = heightoftree(root), i;
 
    // vector for store all minimum of 
    // every level
    vector<int> res(n, INT_MAX);
 
    // save every level minimum using 
    // inorder traversal
    printPerLevelMinimum2(root, res, 0);
 
    // print every level minimum
    cout << "Every level minimum is\n";
    for (i = 0; i < n; i++) {
        cout << "level " << i <<" min is = "
                            << res[i] << "\n";
    }
}
 
// Utility function to create a new tree node
/*Node* newNode(int data)
{
    Node* temp = new Node;
    temp->data = data;
    temp->left = temp->right = NULL;
 
    return temp;
}
 */
void levelorder(Node root)
{
if(root==NULL)
return;
queue<Node> q;
q.push(root);
while(!q.empty()){
Node current=q.front();
cout<<current->data<<" ";
if(current->left)
q.push(current->left);
if(current->right)
q.push(current->right);
q.pop();
}
}


void insertbst2(Node root,int item){
Node *temp =(Node*) new Node;
    (*temp)->data = item;
    (*temp)->left = (*temp)->right = NULL;

if(root==NULL){
root=(*temp);
return;
}
if(item<=root->data)
insertbst2(root->left,item);
else
insertbst2(root->right,item);
}


void display(Node root,int spaces)
{
int i;
if(root!=NULL)
{
display(root->right,spaces+3);
for(i=0;i<spaces;i++)
cout<<" ";
cout<<root->data<<"\n";
display(root->left,spaces+3);
}
}

Node insertbst(Node root,int item){
Node temp=(Node)new Node;

temp->data=item;
temp->left=NULL;
temp->right=NULL;

if(root==NULL){
return temp;
}
Node cur;
Node prev;
cur=root;
prev=NULL;
while(cur!=NULL){
prev=cur;
if(item<cur->data)
cur=cur->left;
else if(item>cur->data)
cur=cur->right;
else
cout<<"equl elmt not allowed\n";

}

if(item<prev->data)
prev->left=temp;
else
prev->right=temp;
return root;
}

void inorder(Node root){
if(root==NULL)
return;
else
{
inorder(root->left);
cout<<root->data<<" ";
inorder(root->right);
}

}


int lca(Node root,int n1,int n2){
if(root==NULL)
return -1;
if(root->data==n1 || root->data==n2)
return root->data;
int leftroot=lca(root->left,n1,n2);
int rightroot=lca(root->right,n1,n2);
if(leftroot==-1 && rightroot==-1)
return -1;
if(leftroot!=-1 && rightroot!=-1)
return root->data;

return(leftroot!=-1)?leftroot:rightroot;
}









// Driver program to test above functions
int main()
{
 int ch,item;
    // Let us create binary tree shown 
    // in above diagram
    Node root;
root=NULL;
int n1,n2,i;
while(1){
cout<<"enetre the choice\n1:insert\n2:levelorder\n3:height\n4:perlevelmin\n5:display\n6:inorder\n7:insertbstrec\n8:lca\n9:perlevelmax\n";
cin>>ch;
switch(ch)
{

case 1:cout<<"enetr the item\n";
cin>>item;
root=insertbst(root,item);break;
case 2:levelorder(root);break;
case 3:cout<<heightoftree(root)<<"\n";break;
case 4:perLevelMinimumUtility(root);break;
case 9:perLevelMinimumUtility2(root);break;
case 5:display(root,0);break;
case 6:inorder(root);break;
case 7:cout<<"enetr the item\n";
cin>>item;
insertbst2(root,item);break;
case 8:cout<<"enetre the nodes\n";
cin>>n1>>n2;
i=lca(root,n1,n2);
cout<<i<<"\n ";
break;
default:cout<<"invalid choice\n";
 }


 
    /*       7
         /  \
        6     5
       / \     / \
      4   3 2   1         */
    
 }
    return 0;
}
