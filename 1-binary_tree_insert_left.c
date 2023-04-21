#include "binary_trees.h"
/**
 *binary_tree_insert_left - sets a node to the left of the parent
 *@parent: where did you go?
 *@value: is very important to me
 *Return: return me back to my parent
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	if (!parent)
		return (NULL);
	
	newNode = parent->left;
	parent->left = binary_tree_node(parent, value);
	if (!newNode)
		return (NULL);
	parent->left->left = newNode;
	if (newNode)
		newNode->parent = parent->left;
	return (parent->left);
}
