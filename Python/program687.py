#############################################################################
##     
##  File name :     program687.py
##  Descreption :   Pattern.
##  Author :        Prashant V. Surve
##  Date :          3/08/2025
##
#############################################################################

# input Row :  5 

'''
       *                    4
     *   *                  3
    *   *   *               2
  *   *   *   *             1
*   *   *   *   *           0
  *   *   *   *             1
    *   *   *               2
      *   *                 3
        *                   4
  '''

def Display(iRow):
        
    for i in range(1,iRow+1,1):
        print(" " * (iRow -i) ,end="")              
        print("* " * i)

    for i in range(iRow-1,0,-1):
        print(" " * (iRow -i) ,end="")              
        print("* " * i)

def main():
    print("Enter the number of Rows")
    iValue1 = int(input())

    Display(iValue1)

if __name__ == "__main__":
    main()
            