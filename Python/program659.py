#############################################################################
##     
##  File name :     program659.py
##  Descreption :   Count the frequency of Non Vowels in a string.
##  Author :        Prashant V. Surve
##  Date :          3/08/2025
##
#############################################################################

def CountNonVowels(data):
    iCount = 0

    pattern = "aeiouAEIOU"

    for ch in data:
        if(ch in pattern):
            iCount += 1

    return len(data) - iCount

def main():
    print("Enter string : ")
    str = input()

    iRet = CountNonVowels(str)

    print(f"Frequency of Non vowels in {str} is {iRet}")

if __name__ == "__main__":
    main()