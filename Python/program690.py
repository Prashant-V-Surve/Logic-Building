#############################################################################
##     
##  File name :     program690.py
##  Descreption :   Constructor and Destructor.
##  Author :        Prashant V. Surve
##  Date :          3/08/2025
##
#############################################################################

class Demo:
    def __init__(self):
        print("Inside Constructor")
    
    def __del__(self):
        print("Inside Destructor")

def main():
    print("Inside main")
    
    obj1 = Demo()
    obj2 = Demo()

    print("End of main")

if __name__ == "__main__":
    main()