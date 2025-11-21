#############################################################################
##     
##  File name :     program668.py
##  Descreption :   Replace small letter with capital letter.
##  Author :        Prashant V. Surve
##  Date :          3/08/2025
##
#############################################################################

def StrUpr(data):
    output = ""
    i = 0
     
    for ch in data:
        if(ch >= 'a' and ch <= 'z'):
            output = output + chr(ord(ch) - 32)
        else:
            output = output + ch

    return output

def main():
    print("Enter string : ")
    str = input()

    strx = StrUpr(str)

    print(f"Updated string is {strx}")

if __name__ == "__main__":
    main()