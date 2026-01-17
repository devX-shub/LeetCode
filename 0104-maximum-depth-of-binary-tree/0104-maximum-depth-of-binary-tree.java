/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    public int maxDepth(TreeNode root) {
        //logic 
        if (root == null) {
            return 0;
        }
        /*
            declear a queue data structure
            push the root node in the queue
            mark the level as 1;
            itetrate till the the queue is not empty
                store the size of queue
                itetrate till the size of the queue
                    pop the curr node
                    push the left child and right child in the queue
                increment the value of height by 1 as the current level node is added to the queue
        */ 
        Queue<TreeNode> q = new LinkedList<>();
        q.add(root);
        int height = 0;
        while (!q.isEmpty()) {
            int size = q.size();
            
            for (int i = 0; i < size; i++) {
                TreeNode node = q.poll();
                if (node.left != null) {
                    q.add(node.left);
                }
                if (node.right != null) {
                    q.add(node.right);
                }
            }
            height++;
        }
        return height;
    }
}