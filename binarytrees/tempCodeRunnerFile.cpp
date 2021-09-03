if (root->data == -1)
    {
        return false;
    }
if(root->data==x){
    return true;
}
    queue<Binarytreenode<int> *> pendingnodes;
    pendingnodes.push(root);
    while (pendingnodes.size() != 0)
    {
        Binarytreenode<int> *front = pendingnodes.front();
        pendingnodes.pop();
        cout << front->data << ":";

        if (front->left->data != -1)
        {
            if(front->left->data==x){
                return true;
            }
            pendingnodes.push(front->left);
        }

        if (front->right->data != -1)
        {
            if (front->right->data == x)
            {
                return true;
            }
            pendingnodes.push(front->right);
        }
        cout << endl;
    }
    return false;