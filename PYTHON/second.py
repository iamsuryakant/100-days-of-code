def p2largest(arr, arr_size):

	if (arr_size < 2):
	
		print(" Invalid Input ")
		return
	

	x = y = -2147483648 
	for i in range(arr_size):
	
		if (arr[i] > x):
		
			y = x
			x = arr[i]
		

		
		elif (arr[i] > y and arr[i] != x):
			y = arr[i]
	
	if (y == -2147483648):
		return
	else:
		print(y)

def p2ndSmallest(arr):

	arr_size = len(arr)
	if arr_size < 2:
		print ("invalid")
		return

	x = y = 2147483647
	for i in range(0, arr_size):

		if arr[i] < x:
			y = x
			x = arr[i]
		elif (arr[i] < y and arr[i] != x):
			y = arr[i]

	if (y == 2147483647):
		return
	else:
		print(y)


arr = []
for i in range(int(input())):
    arr.append(int(input()))

n = len(arr)
p2largest(arr, n)
p2ndSmallest(arr)