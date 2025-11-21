#############################################################################
##     
##  File name :     program628.py
##  Descreption :   Count Frequecy of 5.
##  Author :        Prashant V. Surve
##  Date :          3/08/2025
##
#############################################################################

def CountDigitsX(iNo):
    iDigit = 0
    iCount = 0

    while(iNo != 0):
        iDigit = iNo % 10
        if (iDigit == 5):
            iCount += 1
        
        iNo = iNo // 10

    return iCount
    
    
def main():

    print("Enter the number")
    iValue = int(input())

    iRet = CountDigitsX(iValue)
    print(f"Frquency of 5 in {iValue} is {iRet}")

if __name__ == "__main__":
    main()