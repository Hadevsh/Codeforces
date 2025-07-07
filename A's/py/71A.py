def main() -> None:
    t: int = int(input())

    while t > 0:
        w: str = str(input())
        n: int = len(w)

        if n > 10:
            print(w[0] + str(n - 2) + w[n-1])
        else:
            print(w)

        t -= 1

if __name__ == "__main__":
    main()