def main() -> None:
    m, n = map(int, input().split())

    res: int = (m * n) // 2
    print(res)

if __name__ == "__main__":
    main()