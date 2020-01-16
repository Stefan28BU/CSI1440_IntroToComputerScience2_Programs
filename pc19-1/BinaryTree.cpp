#include <iostream>
#include <vector>
#include "BinaryTree.h"
using namespace std;

void BinaryTree::insert(BtreeNode * &tree, double x)
{
    if (!tree)
    {
        tree = new BtreeNode(x);
        return;
    }
    if (tree->value == x)
        return;

    if (x < tree->value)
        insert(tree->left, x);
    else
        insert(tree->right, x);
}

bool BinaryTree::search(double x, BtreeNode *t)
{
    while (t)
    {
        if (t->value == x)
            return true;
        else if (x < t->value)
            return search(x, t->left);
        else
            return search(x, t->right);
    }
    return false;
}

void BinaryTree::fillInorder(vector <double> & v, BtreeNode *tree)
{
    if (tree)
    {
        fillInorder(v, tree->left);
        v.push_back(tree->value);
        fillInorder(v, tree->right);
    }
}

BinaryTree::BinaryTree(){ root = NULL; }
void BinaryTree::insert(double x)
{
    insert(root, x);
}
bool BinaryTree::search(double x)
{
    return search(x, root);
}
void BinaryTree::inorder(vector <double> & v)
{
    fillInorder(v, root);
}