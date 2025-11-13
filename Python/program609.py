#############################################################################
##     
##  File name :     program609.py
##  Descreption :   Check Even or Odd.
##  Author :        Prashant V. Surve
##  Date :          2/08/2025
##
#############################################################################

def CheckEvenOdd(No):
    
    if(No % 2 == 0):
        return True
    else:
        return False    

def main():
    print("Enter number")
    Value = int(input())

    bRet = CheckEvenOdd(Value)

    if(bRet == True):
        print("Value is even no")
    else:
        print("Value is Odd no")    

if __name__ == "__main__":
    main()