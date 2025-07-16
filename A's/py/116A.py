def main() -> None:
    n: int = int(input())
    
    passengers: int = 0
    cap: int = 0

    while n:
        a, b = map(int, input().split())

        passengers -= a
        passengers += b
        cap = max(cap, passengers)

        n -= 1

    print(cap)

if __name__ == "__main__":
    main()