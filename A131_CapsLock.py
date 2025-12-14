# Problem Name: cAPS lOCK
# Difficulty  : 1000
# Link        : https://codeforces.com/problemset/problem/131/A

# Inputs
word = str(input())

# Logic
counter = 0
for char in word:
    if char.isupper():
        counter = counter + 1

    if counter > 1:
        word = word.lower()
        word = word.title()
        break

# Outputs
print(word)