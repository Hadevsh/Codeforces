def main() -> None:
    w: str = str(input())
    distinct: list[chr] = []

    for c in w:
        if c not in distinct:
            distinct.append(c)

    n: int = len(distinct)
    if (n % 2 == 0):  # Female
        print("CHAT WITH HER!")
    else:  # Male
        print("IGNORE HIM!")

if __name__ == "__main__":
    main()