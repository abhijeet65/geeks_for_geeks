#include<iostream>
#include<bits/stdc++.h>

using namespace std;

struct node{
	int data;
	struct node* left;
	struct node* right;
};


struct node* newnode(int data)
{
	struct node* temp=new struct node;
	temp->data=data;
	temp->left=NULL;
	temp->right=NULL;
	return temp;
}

void printpaths(struct node* temp,int paths[],int x);

void rootLeafpaths(struct node* root)
{
	int paths[1000];
	printpaths(root,paths,0);
}

void printpath_array(int paths[],int len)
{
	for(int i=0;i<len;i++)
	{
		cout<<paths[i]<<" ";
	}
	cout<<endl;
	
}

void printpaths(struct node* root,int paths[],int pathlen)
{
	if(root==NULL)
	{
		
		return;
	}
	paths[pathlen]=root->data;
	pathlen++;
	
	if(root->left==NULL && root->right==NULL)
	{
		printpath_array(paths,pathlen);
	}
	else
	{
		printpaths(root->left,paths,pathlen);
		printpaths(root->right,paths,pathlen);
	}
}


void 



int main()
{
	cout<<"Tree Program\n";
	struct node *root = newnode(10); 
  root->left        = newnode(8); 
  root->right       = newnode(2); 
  root->left->left  = newnode(3); 
  root->left->right = newnode(5); 
  root->right->left = newnode(2);
root->right->right=newnode(9);
root->right->right->right=newnode(11);




	
	rootLeafpaths(root);
	
}

