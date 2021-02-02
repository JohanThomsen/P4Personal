package com.company;

public class BinaryTree {
    Node root;

    public BinaryTree(Node data) {
        root = data;
    }

    public void InOrderTraverse(){
        InOrderTraverseDo(this.root);
    }

    private void InOrderTraverseDo(Node root){
        if(root == null) return;
        InOrderTraverseDo(root.left);
        System.out.print(root.value+" ");
        InOrderTraverseDo(root.right);
    }
}
