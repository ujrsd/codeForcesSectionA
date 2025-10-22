# Problem Name: Tram
# Difficulty  : 800
# Link        : https://codeforces.com/problemset/problem/116/A

# Inputs
amountTramStops = int(input())
enteringLeaving = []

for _ in range(amountTramStops):
    line = input() # get line
    numbers = list(map(int, line.split())) # split line
    enteringLeaving.extend(list(map(int, line.split()))) 

# Logic
capacity = 0
maxCapacity = 0
for i in range(0,amountTramStops*2,2):
    capacity = capacity - enteringLeaving[i]
    capacity = capacity + enteringLeaving[i+1]

    if maxCapacity < capacity:
        maxCapacity = capacity
    
# Outputs
print(maxCapacity)