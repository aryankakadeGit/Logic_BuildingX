//Doubly Circular
class node {
    public int data;
    public node next;
    public node(int no)
    {
        this.data=no;
        this.next=null;
    }
}

class DoublyCLL {
    public node first;
    public node last;
    public int iCount;
    public node prev;

    DoublyCLL() {
        System.out.println("Object of SinglyLL gets created ");
        this.first = null;
        this.last=null;
        this.iCount = 0;
        this.prev=null;
    }

    public void InsertFirst(int no) {

    }

    public void InsertLast(int no) {

    }

    public void InsertAtPos(int no, int pos) {

    }

    public void DeleteFirst() {

    }

    public void DeleteLast() {

    }

    public void DeleteAtPos(int pos) {

    }

    public void Display() {

    }

    public int Count() {
        return this.iCount;
    }

}

class program447 {
    public static void main(String[] args) {
       SinglyCLL obj = null;
        int iRet = 0;
        obj = new DoublyCLL();
        obj.InsertFirst(51);
        obj.InsertFirst(21);
        obj.InsertFirst(11);
        obj.Display();
        iRet = obj.Count();
        System.out.println("Number of nodes are : " + iRet);

        obj.InsertLast(101);
        obj.InsertLast(111);
        obj.InsertLast(121);
        obj.Display();
        iRet = obj.Count();
        System.out.println("Number of nodes are : " + iRet);

        obj.DeleteFirst();
        obj.Display();
        iRet = obj.Count();
        System.out.println("Number of nodes are : " + iRet);

        obj.DeleteLast();
        obj.Display();
        iRet = obj.Count();
        System.out.println("Number of nodes are : " + iRet);

        obj.InsertAtPos(105,4);
        obj.Display();
        iRet = obj.Count();
        System.out.println("Number of nodes are : " + iRet);
    
        obj.DeleteAtPos(4);
        obj.Display();
        iRet = obj.Count();
        System.out.println("Number of nodes are : " + iRet);

        // IMPORTANT FOR MEMORY DEALLOCATION
        obj = null;
        System.gc();
    }
}
