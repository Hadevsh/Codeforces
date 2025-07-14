def main() -> None:
    n: int = int(input())
    s: str = str(input())

    a: int = 0
    d: int = 0

    for c in s:
        if c == "A": a += 1
        else: d += 1

    if a > d: print("Anton")
    elif d > a: print("Danik")
    else: print("Friendship")

if __name__ == "__main__":
    main()