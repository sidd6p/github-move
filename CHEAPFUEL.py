T = int(input())

for i in range(T):
    X, Y, A, B, K = list(map(int, input().split()))
    X += A*K
    Y += B*K
    if X < Y: print("PETROL")
    elif Y < X: print("DIESEL")
    else: print("SAME PRICE")