#############################################################################
##     
##  File name :     program626.py
##  Descreption :   Count Even Digits.
##  Author :        Prashant V. Surve
##  Date :          3/08/2025
##
#############################################################################

def CountEven(iNo):
    iDigit = 0
    iCount = 0

    while(iNo != 0):
        iDigit = iNo % 10
        if(iDigit % 2 == 0):
        
            iCount = iCount + 1
        
        iNo = iNo // 10

    return iCount
    
    
def main():

    print("Enter the number")
    iValue = int(input())

    iRet = CountEven(iValue)
    
    print(f"Number of even digits in {iValue} are {iRet}")


if __name__ == "__main__":
    main()