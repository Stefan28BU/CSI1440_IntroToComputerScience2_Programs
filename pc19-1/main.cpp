/*
 * author: Yufan Xu
 * assignment: pc 19-1
 */

#include <iostream>
#include <vector>
#include "BinaryTree.h"

using namespace std;

int main()
{
    BinaryTree tree;
    vector<double> treeNodes;

    tree.insert(3.1);
    tree.insert(12.2);
    tree.insert(123.01);
    tree.insert(1.99);
    tree.insert(7.7);
    tree.insert(7123.6);

    if (tree.search(3.1)) {
        cout << "3.1 is in the tree.\n";
    }
    else {
        cout << "3.1 is not in the tree.\n";
    }

    if (tree.search(3.2)) {
        cout << "3.2 is in the tree.\n";
    }
    else {
        cout << "3.2 is not in the tree.\n";
    }
    tree.inorder(treeNodes);

    for (int i = 0; i < treeNodes.size(); i++) {
        cout << treeNodes[i] << "  ";
    }
    cout << endl;

    return 0;
}