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

void printtop(struct node* root,int dist,int level,map<int,pair<int,int> > &map)
{
	if(root==NULL)
		return;
	
	if(map.find(dist)==mp.end() || level < map[dist].second)
	{
		map[dist]={root->data,level};
	}
	else
	{
		printtop(root->left,dist-1,level+1,map);
		printtop(root->right,dist+1,level+1,map);
	}
}


void topview(struct node* root)
{
	map<int,pair<int,int> > map;
	printtop(root,0,0,map);
	
	for(auto it: map)
	{
		cout<<it.second.first<<" ";
		
	}
}



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

	
}

