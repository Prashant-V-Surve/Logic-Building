#############################################################################
##     
##  File name :     program697.py
##  Descreption :   LinkedList
##  Author :        Prashant V. Surve
##  Date :          3/08/2025
##
#############################################################################

class Node:
    def __init__(self,No):
      self.Data = No
      self.next = None

class SinglyLL:
    def __init__(self):
      self.First = None
      self.iCount = 0

#############################################################################
    def InsertFirst(self,No):
        newn = Node(No)

        if(self.First == None):                # ll is empty
            self.first = newn
        else:
            newn.next = self.First
            self.First = newn

        self.iCount = self.iCount + 1
##############################################################################

    def Display(self):
        pass
        
##############################################################################
    def Count(self):
        return self.iCount 
#############################################################################

def main():
    print("demonstration of singly linear Lnked List")

    sobj = SinglyLL()

    sobj.InsertFirst(51)
    sobj.InsertFirst(21)
    sobj.InsertFirst(11)
    
    iRet = sobj.Count()

    print(f"Number of nodes on Linked List are {iRet}")

if __name__ == "__main__":
    main()