#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_inorder - goes through a binary tree by in-order traversal
 * @tree: the tree to traverse
 * @func: the pointer to a function to call for each node
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
