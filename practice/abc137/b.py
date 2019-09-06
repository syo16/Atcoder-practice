K, X = map(int, input().split())

start = -1000000
end = 1000000
if (X - K + 1 > start):
    start = X - K + 1 

if (X + K - 1 < end):
    end = X + K - 1

for i in range(start, end + 1):
    print(i, end=' ')
