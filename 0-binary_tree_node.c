#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_node - creates a binary tree node
 * @value: value to store in new node
 * @parent: parent of the node to create
 * 
 * Return: pointer to the node jdid
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node-jdid;

	node-jdid = malloc(sizeof(binary_tree_t));
	if (node-jdid == NULL)
		return (NULL);
	node-jdid->parent = parent;
	node-jdid->n = value;
	node-jdid->left = node-jdid->right = NULL;
	return (node-jdid);
}
