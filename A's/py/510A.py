def main() -> None:
    n, m = map(int, input().split())
    right: bool = True
    row: str = ""
    for i in range(n):
        row = ""
        for j in range(m):
            if i % 2 == 0: row += "#"
            else:
                if (not right and j == 0) or (right and j == m - 1): row += "#"
                else: row += "."
        if i % 2 != 0: right = not right
        print(row)

if __name__ == "__main__":
    main()