# input 
#############################################################################
##     
##  File name :     program686.py
##  Descreption :   Count Even Digits.
##  Author :        Prashant V. Surve
##  Date :          3/08/2025
##
#############################################################################

# input Row :  5 

'''
*   *   *   *   *           0
  *   *   *   *             1
    *   *   *               2
      *   *                 3
        *                   4
  '''

def Display(iRow):
        
    for i in range(1,iRow+1,1):
        print(" " * (iRow -i) ,end="")              
        print("*\t" * i)
def main():
    print("Enter the number of Rows")
    iValue1 = int(input())

    Display(iValue1)

if __name__ == "__main__":
    main()
            