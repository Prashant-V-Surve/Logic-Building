#############################################################################
##     
##  File name :     program625.py
##  Descreption :   Summation of Digits of given number.
##  Author :        Prashant V. Surve
##  Date :          2/08/2025
##
#############################################################################

# Input : 721
# 1  +  2   +   7  =  10

def SumDigits(No):
    iDigit = 0
    iSum = 0

    while(No != 0):
        iDigit = No % 10
        iSum = iSum + iDigit
        No = No // 10

    return iSum
    
    
def main():

    print("Enter the number")
    Value = int(input())

    iRet = SumDigits(Value)
    
    print(f"Summation of digit {iRet}")


if __name__ == "__main__":
    main()