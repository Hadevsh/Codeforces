def main() -> None:
    n: int = int(input())

    previous: str = ""
    groups: int = 0
    while n:
        current: str = str(input())
        if current != previous or previous == "": groups += 1
        previous = current
        n -= 1
        
    print(groups)

if __name__ == "__main__":
    main()