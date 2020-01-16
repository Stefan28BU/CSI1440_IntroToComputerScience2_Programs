#ifndef PC19_1_BINARYTREE_H
#define PC19_1_BINARYTREE_H

#include <iostream>
#include <vector>

using namespace std;

class BinaryTree
{
private:
    class BtreeNode
    {
        friend class BinaryTree;
        double value;
        BtreeNode *left;
        BtreeNode *right;
        BtreeNode(double value1, BtreeNode *left1 = NULL, BtreeNode *right1 = NULL)
        {
            value = value1;
            left = left1;
            right = right1;
        }
    };
    BtreeNode *root;

    void insert(BtreeNode *&, double);
    bool search(double, BtreeNode *);
    void fillInorder(vector <double> & v, BtreeNode *);
public:

    BinaryTree();
    void insert(double x);
    bool search(double x);
    void inorder(vector <double> & v);
};
#endif