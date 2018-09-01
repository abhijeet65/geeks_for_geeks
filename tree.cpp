#include<bits/stdc++.h>
#include<iostream>
#include<ctype.h>
#include<cstdio>
using namespace std;

struct node{
	int info;
	struct node* left;
	struct node* right;
};
typedef struct node* Node;

Node insertree(Node root,int item)
{
	Node temp=(Node)new Node;
	temp->info=item;
	temp->left=NULL;
	temp->right=NULL;
	
	if(root==NULL)
	return temp;
else
{
	cout<<"Enter the directins for insertion\n";
	char d[20];
	scanf("%s",d);
	Node cur,prev;
	int i=0;
	cur=root;
	prev=NULL;
	while(cur!=NULL && d[i]!='\0')
	{
		prev=cur;
		if(toupper(d[i])=='R')
			cur=cur->right;
		else if(toupper(d[i])=='L')
			cur=cur->left;
		else
			cout<<"Invalid char\n";
		i++;
	}
	if(cur!=NULL || d[i]!='\0')
		cout<<"canot insert here\n";
    if(cur==NULL && d[i]=='\0')
	{
		if(d[i-1]=='r')
			prev->right=temp;
		else
			prev->left=temp;
	}
	return root;
}
}
		
Node lca(Node root,Node p1,Node p2)		
{
	if(root==NULL)
		return 0;
	if(root==p1 || root==p2)
		return root;
	Node left=lca(root,p1,p2);
	Node right=lca(root,p1,p2);
	
	if(left!=NULL && right!=NULL)
		return root;
	if(left==NULL && right==NULL)
		return NULL;
	
	return(left!=NULL)?left:right;
	
	
	
}
	
	void printnodes(Node root,int k)
	{
		
		if(root==NULL)
			return;
		if(k==0){
			cout<<root->info<<" ";
			return;
		}
		printnodes(root->left,k-1);
		printnodes(root->right,k-1);
		
	}
	
	
	int ancestors(Node root,Node j)
	{
	  if(root!=NULL){
       
	  if(root->info==j->info){
	      return 1;
	  }
	if(ancestors(root->left,j)||ancestors(root->right,j))
	{
		cout<<root->info<<" ";
		return 1;
	
      	
	}
	}
	}
	
	
	void printpaths(Node root)
	{
		
		if(root==NULL){
			return;
		}
		printpaths(root->left);
		
		cout<<root->info<<" ";
		printpaths(root->right);
		
		
	}
	
	
	
void display(Node root,int spaces)
{
int i;
if(root!=NULL)
{
display(root->right,spaces+3);
for(i=0;i<spaces;i++)
cout<<" ";
cout<<root->info<<"\n";
display(root->left,spaces+3);
}
}	


int height(Node root)
{
	if(root==NULL)
		return 0;
	int lefth=height(root->left);
	int righth=height(root->right);
	
	if(lefth>righth)
		return lefth+1;
	else
		return righth+1;
}


int isbalanced(Node root)
{
	if(root==NULL)
		return 1;
	int left=height(root->left);
	int right=height(root->right);
	
	if(abs(left-right)<=1 && isbalanced(root->left)&& isbalanced(root->right))
		return 1;
	return 0;
}

int width(Node root)
{
	if(root==NULL)
		return 0;
	return(1+height(root->left)+height(root->right));
}



int main()
{
 int ch,item;
    // Let us create binary tree shown 
    // in above diagram
    Node root,ans;
root=NULL;
ans=NULL;
Node n1,n2,j;
j=(Node)new Node;
int i,k,p1,p2;

while(1){
cout<<"enetre the choice\n1:insert\n2:levelorder\n3:height\n4:perlevelmin\n5:display\n6:inorder\n7:insertbstrec\n8:lca\n9:perlevelmax\n";
cin>>ch;
switch(ch)
{

case 1:cout<<"enetr the item\n";
cin>>item;
root=insertree(root,item);break;
case 2:display(root,0);break;
case 3:cout<<"enetre the nodes\n";
cin>>p1>>p2;
n1=(Node)new Node;
n1->info=p1;
n2=(Node)new Node;
n2->info=p2;
ans=lca(root,n1,n2);
cout<<ans->info<<"\n";break;
case 4:cout<<"Enter the depth u want to print\n";
cin>>k;
printnodes(root,k);break;
case 5:cout<<"Enter the Node u want to print all ancesotrs\n";
cin>>p1;
j->info=p1;
j->left=NULL;
j->right=NULL;
i=ancestors(root,j);break;
case 6:printpaths(root);break;
case 7:k=isbalanced(root);
cout<<(k==1)?"yes":"NO";break;
case 8:k=width(root);
cout<<"Width of binary tree is="<<k<<endl;break;
default:cout<<"invalid choice\n";
 }


 
    /*     7
         /  \
        6     5
       / \   / \
      4   3 2   1         */
    
 }
    return 0;
}
/*case 2:levelorder(root);break;
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
*/