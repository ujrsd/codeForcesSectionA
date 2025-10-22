# Problem Name: George and Accommodation
# Difficulty  : 800
# Link        : https://codeforces.com/problemset/problem/467/A

# Inputs
amountRooms = int(input())
dormitory = []

for _ in range(amountRooms):
    line = list(map(int, input().split()))
    dormitory.extend(line) 

# Logic
counter = 0
for i in range(0, amountRooms*2, 2):
    if dormitory[i+1]-dormitory[i] >= 2:
        counter = counter + 1

# Outputs
print(counter)