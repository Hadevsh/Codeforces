def main() -> None:
    n: int = int(input())
    for i in range(n):
        if i % 2 != 0 and i == n - 1: print("I love it", end=""); break
        elif i % 2 == 0 and i == n - 1: print("I hate it ", end=""); break
        elif i % 2 != 0: print("I love that", end=" ")
        else: print("I hate that", end=" ")

if __name__ == "__main__":
    main()