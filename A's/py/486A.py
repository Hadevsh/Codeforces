def main() -> None:
    n: int = int(input())
    if n % 2 == 0:
        # n = 2k -> f(n) = k
        print(n / 2)
    else:
        # n = 2k + 1 -> f(n) = -(k + 1) = -((n + 1) / 2)
        print(-((n + 1) / 2))

if __name__ == "__main__":
    main()