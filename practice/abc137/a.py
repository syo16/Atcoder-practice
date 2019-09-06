A, B = map(int, input().split()) 

max = max(A+B, A-B, A*B)

print(max)
