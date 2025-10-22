# Problem Name: In Search of an Easy Problem
# Difficulty  : 800
# Link        : https://codeforces.com/problemset/problem/1030/A

# Inputs
peopleAsked = int(input())
opinions = list(map(int, input().split()))

# Logic
res = "EASY"
for opinion in opinions:
    if opinion:
        res = "HARD"

# Outputs
print(res)