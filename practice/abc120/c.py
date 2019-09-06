s = input()
s_length = len(s);
count = 0;

for i in range(int(s_length/2)):
    for j in range(int(len(s))):
        if j+1 < int(len(s)) and s[j] != s[j+1]:
            s = s[:j] + s[j+2:len(s)]
            count = count + 1

print(count * 2)

