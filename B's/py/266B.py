def main() -> None:
    n, t = map(int, input().split())
    s: list[chr] = list(str(input()))

    while t:
        i: int = 0
        while i < n - 1:
            if s[i] == 'B' and s[i + 1] == 'G':
                s[i], s[i + 1] = s[i + 1], s[i]
                i += 2 # Skip next pos
            else: i += 1
        t -= 1

    print("".join(s))

if __name__ == "__main__":
    main()