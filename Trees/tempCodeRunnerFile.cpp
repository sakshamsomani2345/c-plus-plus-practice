int sum=0;
    if (root == NULL)
    {
        return 0;
    }
    queue<Treenode<int> *> pendingQ;
    pendingQ.push(root);
    while (pendingQ.size() != 0)
    {
        Treenode<int> *front = pendingQ.front();
        // cout << front->data << ":";
        sum=sum+front->data;
        pendingQ.pop();
        for (int i = 0; i < root->children.size(); i++)
        {
            pendingQ.push(root->children[i]);

            if (root->children.size() - 1 != i)
            {
                // cout << root->children[i]->data << ",";
                sum = sum + root->children[i]->data;
            }
            else
            {
                // cout << root->children[i]->data;
                sum = sum + root->children[i]->data;
            }
        }
        root = pendingQ.front();
        cout << endl;
    }
    return sum;