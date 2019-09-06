n = int(input())
h = list(map(int, input().split()))
ans = 'Yes'

for i in range(1,n):
    if h[i-1] <= h[i]:
        if h[i-1] <= h[i]-1:
            h[i] = h[i] - 1
    else:
        ans = 'No'
        break
print(ans)
