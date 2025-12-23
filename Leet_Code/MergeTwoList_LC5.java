//////////////////////////////////////////////////////////////////
//                                                 
//                 3. Merge Two Sorted Lists                     
//                                                 
//////////////////////////////////////////////////////////////////

class Node
{
    public int no;
    public Node next;
    
    public Node(int val)
    {
        this.no = val;
        this.next = null; 
    }
}

class mergeTwoList
{
    public Node dummy;
    public Node temp;
    public Node list1;
    public Node list2;

    public mergeTwoList(Node l1, Node l2)
    {
        this.list1 = l1;
        this.list2 = l2;
        this.dummy = new Node(0);
        this.temp = dummy;
    }
    
    public Node MergeX()
    {
        while(list1 != null && list2 != null)
        {
            if(list1.no < list2.no)
            {
                temp.next = list1;
                list1 = list1.next; 
            }
            else
            {
                temp.next = list2;
                list2 = list2.next;
            }

            temp = temp.next;
        }

        temp.next = (list1 == null) ? list2 : list1;
        return dummy.next;
    }

    public void printList(Node head)
    {
        while(head != null)
        {
            System.out.print(head.no + " -> ");
            head = head.next;
        }
        System.out.println("null");
    }
}

class MergeTwoList_LC5
{
    public static void main(String A[])
    {
        Node lRet = null;

        // Create first list: 1 → 2 → 5
        Node list1 = new Node(1);
        list1.next = new Node(2);
        list1.next.next = new Node(5);

        // Create second list: 2 → 4 → 6
        Node list2 = new Node(2);
        list2.next = new Node(4);
        list2.next.next = new Node(6);

        mergeTwoList mobj = new mergeTwoList(list1, list2);

        lRet = mobj.MergeX();

        mobj.printList(lRet);
        
    }
}
