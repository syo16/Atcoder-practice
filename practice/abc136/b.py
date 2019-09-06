n = int(input())
ans = 0

for i in range(1,n+1):
    if (i >=1 and i <=9) or (i >= 100 and i <= 999) or (i >= 10000 and i <= 99999):
        ans += 1
print(ans)
