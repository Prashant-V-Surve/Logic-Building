#############################################################################
##     
##  File name :     program673.py
##  Descreption :   Numeric Pattern.
##  Author :        Prashant V. Surve
##  Date :          3/08/2025
##
#############################################################################

# input 4
# Output    -4    -3  -2  -1    0   1   2   3   4

def Display(iNo):
    for i in range(-iNo, iNo+1 ,1):
        print(i,end="\t")

    print()

def main():
    print("Enter the Value")
    iValue = int(input())

    Display(iValue)

if __name__ == "__main__":
    main()
            