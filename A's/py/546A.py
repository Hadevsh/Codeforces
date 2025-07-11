def main() -> None:
    k, n, w = map(int, input().split())
    price: int = 0

    for i in range(1, w + 1):
        price += i * k

    res: int = price - n
    print(0 if res <= 0 else res)

if __name__ == "__main__":
    main()