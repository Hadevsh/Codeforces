def main() -> None:
    t: int = int(input())
    score: int = 0

    while t > 0:
        a, b, c = map(int, input().split())
        if a + b + c > 1:
            score += 1

        t -= 1

    print(score)

if __name__ == "__main__":
    main()