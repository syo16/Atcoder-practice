n = int(input())
s = [''.join(sorted(input())) for i in range(n)]
x = set()
d = {}
cnt = 0

for i in range(n):
    if s[i] not in x:
        x.add(s[i])
        d[s[i]] = 1
    else:
        cnt += d[s[i]]
        d[s[i]] = d[s[i]]+1

print(cnt)

