# Problem Name: Vanya and Fence
# Difficulty  : 800
# Link        : https://codeforces.com/problemset/problem/677/A

# Inputs

## Input for multiple variable
amoutPeople, fenceHeight = map(int, input().split())
## Input for vector
peopleHeights = list(map(int, input().split()))

# Logic
minFenceWidth = 0

for height in peopleHeights:
    if height > fenceHeight:
        minFenceWidth = minFenceWidth + 2
    else:
        minFenceWidth = minFenceWidth + 1

# Outputs
print(minFenceWidth)