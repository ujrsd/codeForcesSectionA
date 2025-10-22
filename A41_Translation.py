# Problem Name: Translation
# Difficulty  : 800
# Link        : https://codeforces.com/problemset/problem/41/A

# Inputs
word, translation = input(), input()

# Logic
res = "YES"

if len(word) == len(translation):
    for i in range(len(word)):
        if word[i] != translation[len(translation)-i-1]:
            res = "NO"
            break
else:
    res = "NO"

# Outputs
print(res)