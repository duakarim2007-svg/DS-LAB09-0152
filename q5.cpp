void inorder(Node* root, int arr[], int &i)
{
    if(root == NULL)
        return;

    inorder(root->left, arr, i);
    arr[i++] = root->data;
    inorder(root->right, arr, i);
}

Node* build(int arr[], int start, int end)
{
    if(start > end)
        return NULL;

    int mid = (start + end) / 2;

    Node* root = new Node(arr[mid]);

    root->left = build(arr, start, mid - 1);
    root->right = build(arr, mid + 1, end);

    return root;
}
Node* balanceBST(Node* root)
{
    int arr[100];
    int i = 0;

    inorder(root, arr, i);

    return build(arr, 0, i - 1);
}
