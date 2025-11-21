#############################################################################
##     
##  File name :     program632.py
##  Descreption :   Display Summation of Factors of Number.
##  Author :        Prashant V. Surve
##  Date :          3/08/2025
##
#############################################################################

def SumFactors(iNo):
    iSum = 0
    for i in range(1,(iNo//2)+1):
        if(iNo % i == 0):
            iSum = iSum + i

    return iSum
    
    
def main():

    print("Enter the number")
    iValue = int(input())

    iRet = SumFactors(iValue)
    print(f"summation of factors of {iValue} is : {iRet}")
    
if __name__ == "__main__":
    main()