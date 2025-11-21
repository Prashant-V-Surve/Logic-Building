#############################################################################
##     
##  File name :     program681.py
##  Descreption :   Pattern.
##  Author :        Prashant V. Surve
##  Date :          3/08/2025
##
#############################################################################

# input Row :  5    Col :  5 

'''
 
 *  *   *   *   *
 *              *
 *              *
 *              *
 *  *   *   *   *

'''

def Display(iRow,iCol):
        
    for i in range(1,iRow+1,1):              

        for j in range(1,iCol+1,1):          
            if(i == 1 or i == iRow or j == 1 or j == iCol):
                print("*",end="\t")
            else:
                print(" ",end="\t")

        print()
    
    print()

def main():
    print("Enter the number of Rows")
    iValue1 = int(input())

    print("Enter the number of Column")
    iValue2 = int(input())

    Display(iValue1,iValue2)

if __name__ == "__main__":
    main()
            