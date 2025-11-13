#############################################################################
##     
##  File name :     program608.py
##  Descreption :   Addition of two numbers.
##  Author :        Prashant V. Surve
##  Date :          2/08/2025
##
#############################################################################

def Addition(No1,No2):
    Sum = 0
    Sum = No1 + No2
    return Sum

def main():
    print("Enter first number")
    value1 = int(input())

    print("Enter Second number")
    value2 = int(input())

    Ans = 0
    Ans = Addition(value1,value2)

    print(f"Addition of {value1} & {value2} is : {Ans}")

if __name__ == "__main__":
    main()