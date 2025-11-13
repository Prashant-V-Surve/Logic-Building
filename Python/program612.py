#############################################################################
##     
##  File name :     program612.py
##  Descreption :   Performing Division.
##  Author :        Prashant V. Surve
##  Date :          2/08/2025
##
#############################################################################

def Division(No1,No2):
    Ans = 0
    Ans = No1 / No2

    return Ans
    
       

def main():
    print("Enter first number")
    Value1 = int(input())

    print("Enter second number")
    Value2 = int(input())

    iRet = Division(Value1, Value2)

    print(f"Division of {Value1} & {Value2} is {iRet} no")  

if __name__ == "__main__":
    main()