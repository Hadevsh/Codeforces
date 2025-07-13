def main() -> None:
    n: str = str(input())
    l: int = 0

    for c in n:
        if c == "4" or c == "7": l += 1

    print("YES" if (l == 4 or l == 7) else "NO")

if __name__ == "__main__":
    main()