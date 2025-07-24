def main() -> None:
    n: int = int(input())
    s: str = str(input().strip().lower())

    lowercase = set('abcdefghijklmnopqrstuvwxyz')
    # Check that every letter is in the input
    print("YES" if lowercase <= set(s) else "NO")

if __name__ == "__main__":
    main()