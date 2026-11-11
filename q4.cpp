#Kth smallest
void kthSmallest(Node* root, int k, int &count)
{
    if(root == NULL)
        return;

    kthSmallest(root->left, k, count);

    count++;

    if(count == k)
        cout << "Kth Smallest: " << root->data;

    kthSmallest(root->right, k, count);
}

#Kth largest
void kthLargest(Node* root, int k, int &count)
{
    if(root == NULL)
        return;

    kthLargest(root->right, k, count);

    count++;

    if(count == k)
        cout << "Kth Largest: " << root->data;

    kthLargest(root->left, k, count);
}
#Find height of left and right subtrees
int height(Node* root)
{
    if(root == NULL)
        return 0;

    int l = height(root->left);
    int r = height(root->right);

    return 1 + max(l, r);
}
cout << "Left Height: " << height(root->left);
cout << "\nRight Height: " << height(root->right);
