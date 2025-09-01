def main() -> None:
    n: int = int(input().strip())
    pts = list(map(int, input().split()))

    best = worst = pts[0]
    amazing = 0
    for x in pts[1:]:
        if x > best:
            amazing += 1
            best = x
        elif x < worst:
            amazing += 1
            worst = x

    print(amazing)

if __name__ == "__main__":
    main()