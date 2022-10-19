# Assuming the number ranges from -1e6 to 1e6
n = int (input("Enter the length of numbers-: "))
numbers = [ int(z) for z in input("Enter the numbers-: ").split(' ') ]

countTable = dict ()
for num in numbers  :
    if num not in  countTable :
        countTable[num]=0
    countTable[num]+=1


sorted_list  = list ()
for key in range (int (-1e6) , int (1e6)+1) :
    if key  in countTable :
        while countTable[key] :
            sorted_list.append(key)
            countTable[key]-=1


print(sorted_list)
