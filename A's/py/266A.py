def main() -> None:
    n: int = int(input())
    s: str = str(input())

    res: int = 0

    for i in range(1, len(s)):
        if s[i] == s[i - 1]:
            res += 1

    print(res)

if __name__ == "__main__":
    main()