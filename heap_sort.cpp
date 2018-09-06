#include<bits/stdc++.h>

using namespace std;


void isBalanced(Node* root)
{
	int rh,lh;
	
	if(root==NULL)
		return 1;
	
	
	
	lh=height(root->left);
	rh=height(root->right);
	
	if(abs(lh-rh)<=1 && isBalanced(root->left) && isBalanced(root->right))
		return 1;
	
	return 0;
}

int height(Node* root)
{
	
if(root==NULL)
	return 0;

int left=height(root->left);
int right=height(root->right);

return((left>height)?left+1:right+1);
}

	