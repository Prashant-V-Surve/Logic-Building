#############################################################################
##     
##  File name :     program619.py
##  Descreption :   Print Special characters.
##  Author :        Prashant V. Surve
##  Date :          2/08/2025
##
#############################################################################

def Display(No):

    i = 1
    while(i <= No):
        print("*")
        i = i + 1
    
def main():

    print("Enter the number of stars you want to print")
    Value = int(input())

    Display(Value)    

if __name__ == "__main__":
    main()