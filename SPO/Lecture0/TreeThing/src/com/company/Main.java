package com.company;

public class Main {

    public static void main(String[] args) {
        Node a = new Node("a", null, null);
        Node n = new Node("n", null, null);
        Node var1 = new Node("Var", a, null);
        Node var2 = new Node("Var", n, null);
        Node plus = new Node("Plus", var1, var2);
        Node one = new Node("1", null, null);
        Node Int = new Node("Int", one, null);
        Node Times = new Node("Times", plus, Int);


        BinaryTree Tree = new BinaryTree(Times);
        Tree.InOrderTraverse();
    }
}

