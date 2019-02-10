# Python program to check if the input number is prime or not


# take input from the user
# n = int(input( ))

# prime numbers are greater than 1
if n > 1:
   # check for factors
   for i in range(2,n):
       if (n % i) == 0:
           print("NO")
           break
   else:
       print("YES")
       
