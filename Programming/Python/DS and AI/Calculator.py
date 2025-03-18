a=float(input("Enter the Greater Number:"))
b=float(input("Enter the Smaller Number:"))
print("Enter the operation you would like to perform:")
print("Press 1 for Addition")
print("Press 2 for Subtraction")
print("Press 3 for Multiplication")
print("Press 4 for Division")
c=int(input("Enter the Choice:"))
if(c==1):
    {
        print("Sum = ",a+b)
    }
if(c==2):
    {
        print("Difference = ",a-b)
    }
if(c==3):
    {
        print("Product = ",a*b)
    }
if(c==4):
    {
        print("Division = ",a/b)
    }
else:
    {
        print("Enter the correct option")
    }