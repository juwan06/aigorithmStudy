n = int(input())
cnt = 0
i = 0
a = '666'
while 1:
    if a in str(i):
        print(i)
        cnt += 1
        if cnt == n:
            break
    i += 1
print(i)