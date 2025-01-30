# Python : Calculate the multiplication of an array

def mutliplier(arr) :
    total = 1
    for num in arr:
        total *= num
    return total
 
numbers = [1, 2, 3, 4, 5]
result = mutliplier(numbers)
print("Multiplication of an array python :", result)
