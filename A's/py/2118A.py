def main() -> None:
    t: int = int(input())

    while t:
        n, k = map(int, input().split())
        s: str = ""

        s += "1" * n
        s += "0" * (n - k)
        print(s)

        t -= 1

if __name__ == "__main__":
    main()