def main() -> None:
    s: str = str(input())
    t: str = str(input())

    t = t[::-1]

    if t == s: print("YES")
    else: print("NO")

if __name__ == "__main__":
    main()