# Problem Name: Ilya and Bank Account
# Difficulty  : 900
# Link        : https://codeforces.com/problemset/problem/313/A

# Inputs
bankValue = int(input())

# Logic
if bankValue < 0:
    lastDigit = -bankValue%10
    secondLastDigit = int((-bankValue%100)/10)

    if lastDigit > secondLastDigit:
        bankValue = int(bankValue / 10)
    else:
        bankValue = int(int((bankValue/100))*10 - lastDigit)

# Outputs
print(bankValue)