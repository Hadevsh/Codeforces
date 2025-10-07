def main() -> None:
    t = int(input())
    for _ in range(t):
        s = input().strip().lower()
        print("YES" if s == "yes" else "NO")

if __name__ == "__main__":
    main()