# Problem Name: Anton and Danik
# Difficulty  : 800
# Link        : https://codeforces.com/problemset/problem/734/A

# Inputs
amountGames, winningString = input(), input()

# Logic
counterAnton = 0
counterDanik = 0

for char in winningString:
    if char == 'A':
        counterAnton = counterAnton + 1
    else:
        counterDanik = counterDanik + 1

if counterAnton > counterDanik:
    res = "Anton"
elif counterDanik > counterAnton:
    res = "Danik"
else:
    res = "Friendship"

# Outputs
print(res)