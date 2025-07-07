def main() -> None:
    t: int = int(input())
    res: list[str] = []

    while t > 0:
        n, j, k = map(int, input().split())
        s: list[int] = list(map(int, input().split()))

        if k >= 2:
            # If we're keeping at least 2 players, ANYONE can sneak into the last k.
            res.append("YES")
        else:  # k == 1
            # Only the strongest can possibly be the sole survivor.
            mx: int = max(s)
            # j is 1-indexed
            if s[j - 1] == mx:
                res.append("YES")
            else:
                res.append("NO")

        t -= 1

    for r in res: print(r)

if __name__ == "__main__":
    main()