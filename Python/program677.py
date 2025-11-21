#############################################################################
##     
##  File name :     program677.py
##  Descreption :   Pattern.
##  Author :        Prashant V. Surve
##  Date :          3/08/2025
##
#############################################################################

# input Row :  4    Col :  4 

'''
    $   *   *   *   
    *   $   *   *
    *   *   $   *
    *   *   *   $

'''

def Display(iRow,iCol):
    if(iRow != iCol):
        print("Invalid Input")
        return
        
    for i in range(iRow):              #range(1,iRow+1,1)

        for j in range(iCol):          #range(1,iCol+1,1)
            if(i == j):
                print("$",end="\t")
            else:
                print("*",end="\t")
            
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
            