#############################################################################
##     
##  File name :     program634.py
##  Descreption :   Check whether the number is Perfect number.
##  Author :        Prashant V. Surve
##  Date :          3/08/2025
##
#############################################################################

def CheckPerfect(iNo):
    iSum = 0
    for i in range(1,(iNo//2)+1):
        if(iNo % i == 0):
            iSum = iSum + i

    return(iSum == iNo)
    
        
def main():

    print("Enter the number")
    iValue = int(input())

    bRet = CheckPerfect(iValue)

    if(bRet):
        print(f"{iValue} is a perfect no")
    else:
        print(f"{iValue} is not a perfect no")

    
if __name__ == "__main__":
    main()