/**********************************************************

    Following is the Binary Tree Node class structure:

    template <typename T>
    class BinaryTreeNode {
      public :
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
                this -> data = data;
                left = NULL;
                right = NULL;
        }
    };
    
***********************************************************/

void PreorderTraversal(BinaryTreeNode<int>* root,int &count)
{
	if (root == NULL)
	{
		return;
	}

	if(root->left==NULL && root->right ==NULL){
        count++;
    }

	PreorderTraversal(root->left,count);
	PreorderTraversal(root->right,count);
}



int noOfLeafNodes(BinaryTreeNode<int> *root){
    int count = 0;
    PreorderTraversal(root,count);
    return count;
}