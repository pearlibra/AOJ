n = int(input())

a = [list(map(str, input().split())) for i in range(n)]

s = []
h = []
c = []
d = []

for l in a:
    if l[0] == 'S':
        s.append(int(l[1]))
    elif l[0] == 'H':
        h.append(int(l[1]))
    elif l[0] == 'C':
        c.append(int(l[1]))
    else:
        d.append(int(l[1]))

for i in range(1,14):
    if i not in s:
        print("S " + str(i))
for i in range(1,14):
    if i not in h:
        print("H " + str(i))
for i in range(1,14):
    if i not in c:
        print("C " + str(i))
for i in range(1,14):
    if i not in d:
        print("D " + str(i))