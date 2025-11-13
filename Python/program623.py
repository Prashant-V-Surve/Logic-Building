#############################################################################
##     
##  File name :     program623.py
##  Descreption :   Mulriplication of Factorials
##  Author :        Prashant V. Surve
##  Date :          2/08/2025
##
#############################################################################

def Factorial(No):

    iFact = 1    
    for i in range(1,No+1):
        iFact = iFact * i
    
    return iFact
    
def main():

    print("Enter the number of stars you want to print")
    Value = int(input())

    iRet = Factorial(Value)

    print(f"Factorial is : {iRet}")    

if __name__ == "__main__":
    main()