T = int(input())

for i in range(T):
    n = int(input())
    a = list(map(int, input().split()))
    a.sort()
    for i in range(len(a)-1):
        while a[i]%2 == 0:
            a[-1] *= 2
            a[i] /= 2
    print(int(sum(a)))