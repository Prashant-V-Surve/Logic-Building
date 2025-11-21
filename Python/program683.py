#############################################################################
##     
##  File name :     program683.py
##  Descreption :   Count Even Digits.
##  Author :        Prashant V. Surve
##  Date :          3/08/2025
##
#############################################################################

# input Row :  5    Col :  4 

'''
    $   $   $   $
    $   $   $   $
    $   $   $   $
    $   $   $   $
    $   $   $   $
'''
 

def Display(iRow,iCol):
        
    for i in range(1,iRow+1,1):                      
        print("$\t" * iCol)
    
    print()

def main():
    print("Enter the number of Rows")
    iValue1 = int(input())

    print("Enter the number of Column")
    iValue2 = int(input())

    Display(iValue1,iValue2)

if __name__ == "__main__":
    main()
            