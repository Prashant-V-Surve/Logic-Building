#############################################################################
##     
##  File name :     program622.py
##  Descreption :   Addition of numbers upto given number
##  Author :        Prashant V. Surve
##  Date :          2/08/2025
##
#############################################################################

def Addition(No):

    iSum = 0    
    for i in range(1,No+1):
        iSum = iSum + i

    return iSum
    
def main():

    print("Enter the number : ")
    Value = int(input())

    iRet = Addition(Value)

    print(f"Addition is : {iRet}")    

if __name__ == "__main__":
    main()