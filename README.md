Unlike linear data structures which have one logical way of traversal, trees have three: PreOrder, Inorder, PostOrder.

For Inorder traversal, you traverse from the left subtree to the root then to the right subtree.
..For Preorder traversal, you traverse from the root to the left subtree then to the right subtree.
...For Post order traversal, you traverse from the left subtree to the right subtree then to the root.

Time complexity = O(n)
..Space complexity = O(h) -> where h is the height of the tree
             worst =O(n)
             Best/Average = O(log n)
