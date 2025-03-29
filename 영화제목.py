n = int(input())
cnt = 0
i = 0
a = '666'
while 1: #666이 들어간 수 규칙 안보임==> 1부터 순회하며 666있는지 검토로 작전 변경경
    if a in str(i):
        print(i)
        cnt += 1
        if cnt == n:
            break
    i += 1
print(i)