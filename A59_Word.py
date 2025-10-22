# Problem Name: Word
# Difficulty  : 800
# Link        : https://codeforces.com/problemset/problem/59/A

# Inputs
text = input()

# Logic
counter = 0

for char in text:
    if char.islower():
        counter += 1

# len() gives back length of string
if counter < (len(text)/2):
    text = text.upper()
else:
    text = text.lower()

# Outputs
print(text)