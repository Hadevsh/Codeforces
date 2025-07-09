def main() -> None:
    n: int = 5 # Must be an odd number to work as intended

    m: int = n // 2 # Middle of the matrix
    x: int = 0
    y: int = 0

    for i in range(n):
        row: list[str] = list(map(str, input().split()))
        if "1" in row:
            y = i
            x = row.index("1")

    res: int = abs(x - m) + abs(y - m)
    print(res)

if __name__ == "__main__":
    main()