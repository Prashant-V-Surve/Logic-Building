#############################################################################
##     
##  File name :     program640.py
##  Descreption :   Display the elements in the number.
##  Author :        Prashant V. Surve
##  Date :          3/08/2025
##
#############################################################################

def main():
    print("Enter the number of elements:")
    iLength = int(input())

    Arr = []

    print("Please enter the elements :")

    for i in range(1,iLength+1):
        no = int(input)
        Arr.append(no)

    print(Arr)

if __name__ == "__main__":
    main()
    