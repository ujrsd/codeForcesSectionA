# Problem Name: Nearly Lucky Number
# Difficulty  : 800
# Link        : https://codeforces.com/problemset/problem/110/A

# Inputs
number = input()

# Logic
# The number is in between 1 and 10^18
counter = 0
res = "NO"

for char in number:
    if char == str(4) or char == str(7):
        counter = counter + 1

if counter == 4 or counter == 7:
    res = "YES"

# Outputs
print(res)