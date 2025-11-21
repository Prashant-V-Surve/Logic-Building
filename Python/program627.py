#############################################################################
##     
##  File name :     program627.py
##  Descreption :   Reverse Displaying Number.
##  Author :        Prashant V. Surve
##  Date :          3/08/2025
##
#############################################################################

def Reverse(iNo):
    iDigit = 0
    iRev = 0

    while(iNo != 0):
        iDigit = iNo % 10
        iRev = iRev * 10 + iDigit
        
        iNo = iNo // 10

    return iRev
    
    
def main():

    print("Enter the number")
    iValue = int(input())

    iRet = Reverse(iValue)
    print(f"Reverse no of {iValue} is {iRet}")

if __name__ == "__main__":
    main()