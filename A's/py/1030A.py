def main() -> None:
    n: int = int(input())
    arr = list(map(int, input().split()))

    res: str = "EASY"
    for a in arr:
        if a == 1: res = "HARD"

    print(res)

if __name__ == "__main__":
    main()