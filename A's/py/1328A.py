def main() -> None:
    t: int = int(input())
    while t:
        a, b = map(int, input().split())
        moves: int = 0
        while a % b != 0:
            moves += 1
            a += 1
        print(moves)
        t -= 1

if __name__ == "__main__":
    main()