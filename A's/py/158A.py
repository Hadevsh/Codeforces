def main() -> None:
    n, k = map(int, input().split())

    v: list[int] = list(map(int, input().split()))

    score: int = 0
    pass_score: int = v[k - 1]

    for s in v:
        if s >= pass_score and s > 0:
            score += 1

    print(score)

if __name__ == "__main__":
    main()