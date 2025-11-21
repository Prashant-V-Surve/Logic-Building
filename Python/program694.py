#############################################################################
##     
##  File name :     program694.py
##  Descreption :   LinkedList
##  Author :        Prashant V. Surve
##  Date :          3/08/2025
##
#############################################################################

class Node:
    def __init__(self,No):
        self.data = No
        self.next = None

def main():
    print("demonstration of singly linear Lnked List")

    obj1 = Node(11)
    obj2 = Node(21)
    obj3 = Node(51)

    obj1.next = obj2
    obj2.next = obj3
    obj3.next = None


if __name__ == "__ main__":
    main()