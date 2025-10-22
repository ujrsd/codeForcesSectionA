# Problem Name: Wrong Subtraction
# Difficulty  : 800
# Link        : https://codeforces.com/problemset/problem/977/A

# Inputs
number, counter = map(int, input().split())

# Logic
for i in range(counter):
    if number % 10 == 0:
        number = number / 10
    else:
        number = number - 1

number = int(number)

# Outputs
print(number)