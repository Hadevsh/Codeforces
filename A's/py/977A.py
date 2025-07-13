def main() -> None:
    n, k = map(int, input().split())

    while k:
        last_digit: int = n % 10
        if (last_digit != 0): n -= 1
        else: n /= 10

        k -= 1

    print(int(n))

if __name__ == "__main__":
    main()