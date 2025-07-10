def main() -> None:
    a, b = map(int, input().split())
    year: int = 0

    while a <= b:
        a *= 3
        b *= 2
        year += 1

    print(year)

if __name__ == "__main__":
    main()