def main() -> None:
    s = list(map(int, input().split()))

    # Count distinct colors
    distinct = len(set(s))
    print(4 - distinct)

if __name__ == "__main__":
    main()