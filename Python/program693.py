#############################################################################
##     
##  File name :     program693.py
##  Descreption :   OOP.
##  Author :        Prashant V. Surve
##  Date :          3/08/2025
##
#############################################################################

class Arithmatic:
    def __init__(self,A = 0,B = 0):
        print("Inside Constructor")
        self.No1 = A
        self.No2 = B
    
    def Addition(self):
        return self.No1 + self.No2

    def Substraction(self):
        return self.No1 - self.No2    


def main():
    print("Inside main")
    
    obj1 = Arithmatic(11,10)

    iRet = obj1.Addition()
    print(f"Addition is ; {iRet}")
    
    iRet = obj1.Substraction()
    print(f"Substraction is ; {iRet}")
    
    print("End of main")

if __name__ == "__main__":
    main()