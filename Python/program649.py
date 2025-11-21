#############################################################################
##     
##  File name :     program649.py
##  Descreption :   Reverse a List.
##  Author :        Prashant V. Surve
##  Date :          3/08/2025
##
#############################################################################

def ReverseArray(Brr):
    iTemp = 0
    iStart = 0 
    iEnd = len(Brr)-1

    while(iStart < iEnd):
        iTemp = Brr[iStart]
        Brr[iStart] = Brr[iEnd]
        Brr[iEnd] = iTemp

        iStart += 1
        iEnd += -1

    return Brr



def main():
    print("Enter the number of elements:")
    iLength = int(input())

    Arr = []

    print("Please enter the elements :")

    for i in range(1,iLength+1):
        no = int(input())
        Arr.append(no)
        
    ReverseArray(Arr)

    print(Arr)

if __name__ == "__main__":
    main()
