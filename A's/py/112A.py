def main() -> None:
    s1: str = str(input()).lower()
    s2: str = str(input()).lower()

    if s1 < s2:
        print("-1")
    elif s2 < s1:
        print("1")
    else:
        print("0")

if __name__ == "__main__":
    main()