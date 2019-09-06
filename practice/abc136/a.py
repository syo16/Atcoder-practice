A, B, C = map(int, input().split())
diff = A - B
ans = C

if diff >0:
    ans = C - diff

print(max(ans, 0))
