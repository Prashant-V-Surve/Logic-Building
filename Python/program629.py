#############################################################################
##     
##  File name :     program629.py
##  Descreption :   Count Frequency of three numbers.
##  Author :        Prashant V. Surve
##  Date :          3/08/2025
##
#############################################################################

def CountDigitsX(iNo):
    iDigit = 0
    iCnt5 = 0
    iCnt4 = 0
    iCnt7 = 0

    while(iNo != 0):
        iDigit = iNo % 10
        if (iDigit == 5):
            iCnt5 += 1
        elif(iDigit == 4):
            iCnt4 += 1
        elif(iDigit == 7):
            iCnt7 += 1

        iNo = iNo // 10

    return iCnt5,iCnt4,iCnt7
    
    
def main():

    print("Enter the number")
    iValue = int(input())

    iRet5, iRet4, iRet7 = CountDigitsX(iValue)
    print(f"Frquency of 5 in {iValue} is {iRet5}")
    print(f"Frquency of 4 in {iValue} is {iRet4}")
    print(f"Frquency of 7 in {iValue} is {iRet7}")
if __name__ == "__main__":
    main()