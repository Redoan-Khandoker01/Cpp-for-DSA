a=int(input("input the value of a->"))
b=int(input("input the value of b->"))
words = ["zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"]


for i in range(a,b+1):
    if 0<=i<=9:
        print(words[i])
    elif (9<i):
        if i%2==0:
            print("even")
        else:
            print("odd")