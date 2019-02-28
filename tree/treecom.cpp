#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<queue>
using namespace std;

struct Node{
    int data;
    struct Node* left;
    struct Node* mid;
    struct Node* right;  
};

struct Node* newNode(int key)
{
    struct Node* temp=new Node;
    temp->data=key;
    temp->left=NULL;
    temp->right=NULL;
    temp->mid=NULL;
    
    return temp;
}

void insert(struct Node* temp, int key) 
{   
    queue<struct Node*> q; 
    q.push(temp); 
    
  
    // Do level order traversal until we find 
    // an empty place.  
    while (!q.empty()) { 
        struct Node* temp = q.front(); 
        q.pop(); 
  
        if (!temp->left) { 
            temp->left = newNode(key); 
            break; 
        } else
            q.push(temp->left); 
  
        if (!temp->right) { 
            temp->right = newNode(key); 
            break; 
        } else
            q.push(temp->right); 
    } 
} 

void levelordertraverse(struct Node* root)
{
    //cout<<"level";
    
    queue<struct Node*> q;
    q.push(root);
    
    while(!q.empty())
    {
        struct Node* temp=q.front();
        q.pop();
        
        cout<<temp->data<<" ";
        if(temp->left)
            q.push(temp->left);
		if(temp->mid)
			q.push(temp->mid);
        if(temp->right)
            q.push(temp->right);
        
    }
    
}


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin>>n;
	cin.ignore();
    int x;
    struct Node* root=newNode(1);
    
    for(int i=1;i<=n;i++)
    {
        cin>>x;
		cin.ignore();
        if(x%2==0 && x%3==0)
        {
            if(root->right==NULL)
            {
                root->right=newNode(x);
            }
            else
            insert(root->right,x);
        }
        else if(x%2==0)
        {
             if(root->left==NULL)
            {
                root->left=newNode(x);
            }
            else
            insert(root->left,x);
        }
        else if(x%3==0)
        {
             if(root->mid==NULL)
            {
                root->mid=newNode(x);
            }
            else
            insert(root->mid,x);
        }
    }
    levelordertraverse(root);
    
    return 0;
}
