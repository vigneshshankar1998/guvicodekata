# Python3 program to calculate pow(x,n) 

# Function to calculate n
# raised to the power k 
def power(n,k): 

	if (k == 0): return 1
	elif (int(k % 2) == 0): 
		return (power(n, int(k / 2)) *
			power(n, int(k / 2))) 
	else: 
		return (n * power(n, int(k / 2)) *
				power(n, int(k / 2))) 
 
