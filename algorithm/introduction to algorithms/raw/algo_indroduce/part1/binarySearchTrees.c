#include <stdio.h>

/**
 * search tree data structure,
 *
 * both dictionary and a priority queue search tree data structure,
 *
 * operations: search, minimum, maximum, predecessor, successor, insert, delete
 *
 *
 * node (left, right, parent , key, satellite)
 *
 * root is a node, but root.parent = Nil
 *
 * binary-search-tree property:
 *
 * y in tree(x.left), z in tree(x.right)
 * y.key ≤ x.key ≤ z.key
 *
 * preorder tree walk
 * inorder tree walk
 * postorder tree walk
 *
 * T(n) ≤ T(k) + T(n - k - 1) + d
 * T(n) = O(n)
 *
 * successor of a node x is the node with the smallest key greater than x.key.
 *
 * TODO
 * inOrderTreeWalk
 * treeSearch
 * iterativeTreeSearch
 * treeMinimum
 * treeMaximum
 * treeSuccessor
 * treePredecessor
 * treeInsert
 * treeDelete
 */

/**
 * red-black tree
 *
 * node (color, parent, left, right, key, sattelite)
 * regards these NILs as being pointers to leaves (which do not exist)
 *
 * external nodes: NILs
 * internal nodes: the normal, key-bearing nodes 
 *
 * red-black properties:
 * 1. color = RED | BLACK
 * 2. root.color = BLACK
 * 3. every leaf (NIL) is black
 * 4. if n.color = RED,
 *    n.left and n.right is BLACK
 * 5. for each node, all simple paths from node to descendant leaves contains the same number of black nodes.
 *
 * bh(x): the number of black nodes on any simple path from, but not including, a node x down to a leaf the balck-height of the node.
 *
 * bh(T) = bh(T.root)
 *
 * some obvious conclusions:
 * 1. bh(x.left) = bh(x) - 1 when x.left.color = BLACK
 * bh(x.left) = bh(x) when x.left.color = RED
 *
 * right is the same with left
 *
 * 2. h(x) ≤ 2 * bh(x)
 * in a simple path, black nodes is not less than red nodes.

 *
 * lemma: A red-black tree with n internal nodes has height at most 2 * lg (n + 1)
 * 
 *
 * rotation: left rotation and right rotation
 *
 * left rotation ( y is not nil )
 * x.left = a, x.right = y
 * y.left = b, y.right = c
 *
 * =>
 *
 * y.left = x, y.right = c
 * x.left = a, x.right = b
 *
 * we changed x and y' level (child becomes parent, parent becomes child), but with different direction. And b changes parent and direction.
 *
 * h(x) --
 * h(y) ++
 *
 * hold binary search property:
 * before rotation, we know a ≤ x ≤ b ≤ y ≤ c
 * after rotation, we know  a ≤ x ≤ b ≤ y ≤ c
 * So, after rotation, we still got a binary search tree
 *
 * on the other direction is the right rotation
 *
 * leftRotate(T, x)
 * rightRotate(T, x)
 *
 * RBInsert
 * 1. insert node z into T just as ordinary binary search tree, color z red
 * 2. fix insert 
 * check violations
 * property 1, 3 holds
 * property 5 holds, because z is red
 * property 2, 4 may be broken
 * property 2 is broken, if z is root
 * property 4 is broken, if z's parent is red
 *
 * discuss property 4 broken:
 *     so z.color = z.p.color = RED
 *     so z.p.p = BLACK
 *
 * if uncle(z).color = RED
 *     we can just recolor: 
 *          z.p.color = BLACK
 *          z.p.p.color = RED // for keep the bh(z.p.p) do no change
 *          uncle(z).color = BLACK
 *     right now, z and z.p and uncle(z) are fine.
 *     but z.p.p is RED now, z.p.p and z.p.p.p may violate property 4, so do the iteration with z = z.p.p
 *
 * if uncle(z).color = BLACK
 *      if z is a right child, do left rotation on z, make the left child z (used to be z.parent).
 *      (1) do the right rotation on z.parent
 *      (2) z.p.color = BLACK
 *          z.p.right = RED // accully, this is out purpose, this node used to be z's grandparent before right rotation
 *          because z.p.right.right is BLACK, no violation (this node used to be uncle of z)
 *
 * TODO
 * RBDelete
 */

int main(void) {
}
