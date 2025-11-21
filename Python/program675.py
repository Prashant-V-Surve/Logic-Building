#############################################################################
##     
##  File name :     program675.py
##  Descreption :   String Pattern.
##  Author :        Prashant V. Surve
##  Date :          3/08/2025
##
#############################################################################

# input HELLO
'''
    H    E   L   L   O
    H    E   L   L   O
    H    E   L   L   O
    H    E   L   L   O
    H    E   L   L   O
'''

def Display(Data):
    for i in range(len(Data)):
        for ch in Data:
            print(ch,end="\t")
        print()
    
    print()

def main():
    print("Enter the string")
    str = input()

    Display(str)

if __name__ == "__main__":
    main()
            