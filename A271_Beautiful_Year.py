# Problem Name: Beautiful Year
# Difficulty  : 800
# Link        : https://codeforces.com/problemset/problem/271/A

# Inputs
year = int(input()) # the year is in between 1000 and 9000

# Logic
year = year + 1

dig0 = str(year)[0:1]
dig1 = str(year)[1:2]
dig2 = str(year)[2:3]
dig3 = str(year)[3:4]

while (dig0 == dig1 or dig0 == dig2 or dig0 == dig3) or (dig1 == dig2 or dig1 == dig3) or (dig2 == dig3):
    year = year + 1

    dig0 = str(year)[0:1]
    dig1 = str(year)[1:2]
    dig2 = str(year)[2:3]
    dig3 = str(year)[3:4]

    #print(dig0, dig1, dig2, dig3)

# Outputs
print(year)