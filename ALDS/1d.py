n = int(input())
l = [int(input()) for i in range(n)]

ans = -1000000000
r_min = l[0]

for r in l[1:]:
    if r - r_min > ans:
        ans = r - r_min
    if r < r_min:
        r_min = r

print(ans)




