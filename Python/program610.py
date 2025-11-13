#############################################################################
##     
##  File name :     program610.py
##  Descreption :   Check Divisible with 3 and 5.
##  Author :        Prashant V. Surve
##  Date :          2/08/2025
##
#############################################################################

def CheckDivisible(No):
    
    if((No % 3 == 0) and (No % 5 == 0)):
        return True
    else:
        return False    

def main():
    print("Enter number")
    Value = int(input())

    bRet = CheckDivisible(Value)

    if(bRet == True):
        print(f"{Value} is divisible by 3 & 5")
    else:
        print(f"{Value} is not divisible by 3 &(or) 5")    

if __name__ == "__main__":
    main()