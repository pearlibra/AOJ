n = int(input())
l = [int(input()) for i in range(n)]

ans = -1000000000

for s in range(n):
    for e in range(s+1, n):
        if ans < l[e] - l[s]:
            ans = l[e] - l[s]
            
print(ans)