def main() -> None:
    n: int = int(input())
    s: list[int] = list(map(int, input().split()))
    ma: int = max(s)
    mi: int = min(s)

    ma_i: int = 0
    mi_i: int = 0
    for i in range(n):
        if s[i] == ma: ma_i = i
        elif s[i] == mi: mi_i = i
    
    secs: int = 0
    if mi_i < ma_i:  # If min height is before the max height
        secs = ma_i + (n - mi_i) - 2
    else:
        secs = ma_i + (n - mi_i)
    
    print(secs)

if __name__ == "__main__":
    main()