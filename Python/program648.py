#############################################################################
##     
##  File name :     program648.py
##  Descreption :   Convert even elemnts in list in odd.
##  Author :        Prashant V. Surve
##  Date :          3/08/2025
##
#############################################################################

def Update(Brr):
    i = 0

    for i in range(len(Brr)-1,-1,-1):
        if(Brr[i] % 2 == 0):

            Brr[i] = (Brr[i] + 1)

    return Brr    


def main():
    print("Enter the number of elements:")
    iLength = int(input())

    Arr = []

    print("Please enter the elements :")

    for i in range(1,iLength+1):
        no = int(input())
        Arr.append(no)
        
    Update(Arr)

    print(Arr)

if __name__ == "__main__":
    main()
