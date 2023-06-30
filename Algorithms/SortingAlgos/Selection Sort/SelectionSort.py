# Actual functions
def swap(lst,ind1,ind2):
	# O(1) - Time complexity
	# O(1) - Space complexity
	temp=lst[ind1]
	lst[ind1]=lst[ind2]
	lst[ind2]=temp

def findMinIndex(lst):
	# O(n) - time complexity
	# O(1) - Space complexity
	minInd=0
	for i in range(len(lst)):
		if lst[i]<lst[minInd]:
			minInd=i
	return minInd

def findMinIndexSpecial(lst,startInd):
	# O(n-startInd) - time Complexity
	# O(1) - Space complexity
	minInd=startInd
	for i in range(startInd,len(lst)):
		if lst[i]<lst[minInd]:
			minInd=i
	return minInd

def NaiveSelectionSort(lst):
	 # O(n2) - time complexity
	 # O(n)  - space complexity
	sortedArr=[]

	for i in range(len(lst)):
		mInd=findMinIndex(lst)
		sortedArr.append(mInd)
		lst[i]=float('inf')
	for i in range(len(lst)):
		lst[i]=sortedArr[i]
def SelectionSort(lst):
	# O(n2) - time complexity
	# O(1)  - space complexity
	for i in range(len(lst)):
		mInd=findMinIndexSpecial(lst,i)
		swap(lst,i,mInd)


# Super simple Welcome message 
# ====================================================
print("Welcome to Selection Sort!")
print("==========================")
print("\n")

n=int(input("Please enter the number of elements: "))
print("\n")

lst=[]
for i in range(n):
	j=int(input("Please enter the value of the element: "))
	lst.append(j)

print("\n")


# Naive Selection Sort
# NaiveSelectionSort(lst)

# Selection sort
SelectionSort(lst)
print(lst)