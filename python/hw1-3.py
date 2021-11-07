numbers=[12, 10, 32, 3, 66, 17, 42, 99, 20]

for num in numbers: #a
    print(num)

for num in numbers: #b
    print(num,end=' ')
    print(num*num)

total=0
for num in numbers: #c
    total+=num
print(total)

product=1
for num in numbers: #d
    product*=num
print(product)
