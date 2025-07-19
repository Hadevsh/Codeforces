def main() -> None:
    n: int = int(input())

    res: int = 0
    while n:
        p, q = map(int, input().split())
        if q - p >= 2: res += 1
        n -= 1
    print(res)

if __name__ == "__main__":
    main()