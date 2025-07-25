def main() -> None:
    t: int = int(input())
    while t:
        n: int = int(input())
        print((n - 1) // 2)
        t -= 1

if __name__ == "__main__":
    main()