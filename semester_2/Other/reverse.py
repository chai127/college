import math

def reverse(n):
    sum = 0
    negative = False  # define this before otherwise when n is +ve if block generates an NameError
    if (n < 0):
        negative = True
        n = -n
    while(n != 0):
        r = n % 10
        sum = sum*10 + r
        n = n // 10   # integer division
    if(negative):
        sum = -sum
    return sum

user_input = input("Enter a number: ")

try:
    num = int(user_input)  # convert input to integer (works with negatives too)
    print("Valid integer!")
    
    result = reverse(num)

    print(f"The reversed number is: {result}") #f inside is necessary

except ValueError:
    print("Invalid input. Please enter an integer.")





