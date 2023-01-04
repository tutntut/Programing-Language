def mysum(*number):
    sum = 0
    for num in number:
        sum += num
    return sum

print(mysum(10,20,30,40))