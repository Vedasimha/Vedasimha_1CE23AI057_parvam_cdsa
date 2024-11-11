class Node {
    int data;
    Node prev;
    Node next;

    // Constructor to create a new node
    Node(int data) {
        this.data = data;
        this.prev = null;
        this.next = null;
    }
}

class DoublyLinkedList {
    Node head;

    // Insert a new node at the end of the list
    public void insertAtEnd(int data) {
        Node newNode = new Node(data);
        if (head == null) {
            head = newNode;
            return;
        }
        Node temp = head;
        while (temp.next != null) {
            temp = temp.next;
        }
        temp.next = newNode;
        newNode.prev = temp;
    }

    // Insert a new node at the beginning of the list
    public void insertAtBeginning(int data) {
        Node newNode = new Node(data);
        if (head == null) {
            head = newNode;
            return;
        }
        newNode.next = head;
        head.prev = newNode;
        head = newNode;
    }

    // Delete a node from the list
    public void deleteNode(int data) {
        if (head == null) {
            System.out.println("List is empty.");
            return;
        }
        Node temp = head;

        // If head node holds the key to be deleted
        if (temp != null && temp.data == data) {
            head = temp.next;
            if (head != null) head.prev = null;
            return;
        }

        // Search for the node to be deleted
        while (temp != null && temp.data != data) {
            temp = temp.next;
        }

        // If the data was not found in the list
        if (temp == null) {
            System.out.println("Node with data " + data + " not found.");
            return;
        }

        // Unlink the node from the list
        if (temp.next != null) temp.next.prev = temp.prev;
        if (temp.prev != null) temp.prev.next = temp.next;
    }

    // Display the list from start to end
    public void displayForward() {
        Node temp = head;
        System.out.print("Doubly Linked List (forward): ");
        while (temp != null) {
            System.out.print(temp.data + " ");
            temp = temp.next;
        }
        System.out.println();
    }

    // Display the list from end to start
    public void displayBackward() {
        if (head == null) return;

        // Move to the end of the list
        Node temp = head;
        while (temp.next != null) {
            temp = temp.next;
        }

        // Print from the last node to the first node
        System.out.print("Doubly Linked List (backward): ");
        while (temp != null) {
            System.out.print(temp.data + " ");
            temp = temp.prev;
        }
        System.out.println();
    }
}

public class DoublyLinkedListExample {
    public static void main(String[] args) {
        DoublyLinkedList list = new DoublyLinkedList();

        // Insert elements into the doubly linked list
        list.insertAtEnd(10);
        list.insertAtEnd(20);
        list.insertAtEnd(30);
        list.insertAtBeginning(5);
        list.insertAtBeginning(1);

        // Display the list forward and backward
        list.displayForward();
        list.displayBackward();

        // Delete an element and display the list again
        list.deleteNode(20);
        list.displayForward();
        list.displayBackward();
    }
}
