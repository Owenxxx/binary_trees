#include "binary_trees.h"

/**
 * binary_tree_node - Creates a binary treeee node
 * @value: value to store in new node 
 * @parent: parent of the node to create
 * Return: the new node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node-jdid;

	node-jdid = malloc(sizeof(binary_tree_t));
	if (node-jdid == NULL)
	{
		return (NULL);
	}
	node-jdid->n = value;
	node-jdid->parent = parent;
	node-jdid->left = NULL;
	node-jdid->right = NULL;
	return (node-jdid);
}
