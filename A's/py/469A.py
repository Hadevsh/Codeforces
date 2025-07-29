def main() -> None:
    n: int = int(input())

    X: list[int] = list(map(int, input().split()))
    x: int = X[0]
    X.pop(0)

    Y: list[int] = list(map(int, input().split()))
    y: int = Y[0]
    Y.pop(0)

    can: bool = True
    for i in range(n + 1):
        if not ((i not in X) or (i not in Y)):
            can = False
            break

    print("I become the guy." if can else "Oh, my keyboard!")

if __name__ == "__main__":
    main()