def main() -> None:
    s: list[str] = input().strip()
    
    letters = set()
    for c in s:
        if 'a' <= c <= 'z':
            letters.add(c)

    print(len(letters))

if __name__ == "__main__":
    main()