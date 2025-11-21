#############################################################################
##     
##  File name :     program661.py
##  Descreption :   Display small letters in string.
##  Author :        Prashant V. Surve
##  Date :          3/08/2025
##
#############################################################################

def CountSmall(data):
    iCount = 0

    for ch in data:
        if(ch >= 'a' and ch <= 'z'):
            iCount += 1

    return iCount

def main():
    print("Enter string : ")
    str = input()

    iRet = CountSmall(str)

    print(f"Frequency of small charcters in {str} is {iRet}")

if __name__ == "__main__":
    main()