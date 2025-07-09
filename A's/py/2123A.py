def main() -> None:
    t: int = int(input())

    winners: list[str] = []

    while t:
        n: int = int(input())

        winners.append("Alice" if n % 4 != 0 else "Bob")

        t -= 1

    for w in winners:
        print(w)

if __name__ == "__main__":
    main()