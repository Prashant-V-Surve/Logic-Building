#############################################################################
##     
##  File name :     program630.py
##  Descreption :   Display Factors.
##  Author :        Prashant V. Surve
##  Date :          3/08/2025
##
#############################################################################

def DisplayFactors(iNo):
    print(f"Factors of {iNo} are :")
    for i in range(1,iNo):
        if(iNo % i == 0):
            print(i)

   
def main():

    print("Enter the number")
    iValue = int(input())

    DisplayFactors(iValue)
    
    
if __name__ == "__main__":
    main()