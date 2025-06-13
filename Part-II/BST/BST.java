package BST;

public class BST{
    public static void main(String[] args){

        BSTree t = new BSTree();
        t.addNode(10);
        t.addNode(5);
        t.addNode(3);
        t.addNode(20);
        t.addNode(6);
        t.addNode(15);
        t.addNode(2);
        t.addNode(25);
        System.out.println("In-order Traversal:");
        t.inOrderTraversal(t.root);
        System.out.println("\nPre-order Traversal:");
        t.preOrderTraversal(t.root);
        System.out.println("\nPost-order Traversal:");
        t.postOrderTraversal(t.root);
        System.out.println("\nFind Node with data 105: " + t.findNode(105));

    }
}
class BSTNode {
    int data;
    BSTNode leftChild;
    BSTNode rightChild;

    public BSTNode(int data){
        this.data = data;
    }

    @Override
    public String toString(){
        return data + ", ";
    }
}

class BSTree{
    BSTNode root;

    public void addNode(int data){
        BSTNode newNode = new BSTNode(data);
        if (root == null) {
            root = newNode;
        }
        else{
            BSTNode currentNode = root;
            while (true){
                BSTNode parentNode = currentNode;
                if(newNode.data<currentNode.data){
                    currentNode = currentNode.leftChild;
                    if( currentNode == null){
                        parentNode.leftChild = newNode;
                        return;
                    }
                }
                else{
                    currentNode = currentNode.rightChild;
                    if( currentNode == null){
                        parentNode.rightChild = newNode;
                        return;
                    }
                }
            }
        }
    }

    public void preOrderTraversal(BSTNode currentNode){
        if(currentNode == null){
            return;
        }
        System.out.print(currentNode);         //Here we don't add .toString() because it is automatically called when printing an object, because we already overrode the toString() method in BSTNode class. (Superclass Object has a toString() method, which is called when we print an object)
        preOrderTraversal(currentNode.leftChild);
        preOrderTraversal(currentNode.rightChild);
    }

    public void postOrderTraversal(BSTNode currentNode){
        if(currentNode == null){
            return;
        }
        postOrderTraversal(currentNode.leftChild);
        postOrderTraversal(currentNode.rightChild);
        System.out.print(currentNode);
    }

    public void inOrderTraversal(BSTNode currentNode){
        if(currentNode == null){
            return;
        }
        inOrderTraversal(currentNode.leftChild);
        System.out.print(currentNode);
        inOrderTraversal(currentNode.rightChild);
    }

    public BSTNode findNode(int data){
        BSTNode currentNode = root;
        while(currentNode != null){
            if(data == currentNode.data){
                return currentNode;
            }
            else{
                if(data < currentNode.data){
                    currentNode = currentNode.leftChild;
                }
                else{
                    currentNode = currentNode.rightChild;
                }
            }
        }
        return null;
    }
}
