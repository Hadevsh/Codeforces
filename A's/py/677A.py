def main() -> None:
    n, h = map(int, input().split())
    arr = list(map(int, input().split()))

    width: int = 0
    for a in arr:
        width += 2 if a > h else 1

    print(width)

if __name__ == "__main__":
    main()