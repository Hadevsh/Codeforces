def main() -> None:
    w: int = int(input())

    print("YES" if w > 2 and w % 2 == 0 else "NO")

if __name__ == "__main__":
    main()