def main() -> None:
    n: int = int(input())
    bills: int = 0
    while n > 0:
        if n - 100 >= 0:
            n -= 100; bills += 1
        elif n - 20 >= 0:
            n -= 20; bills += 1
        elif n - 10 >= 0:
            n -= 10; bills += 1
        elif n - 5 >= 0:
            n -= 5; bills += 1
        elif n - 1 >= 0:
            n -= 1; bills += 1
        else:
            break
    print(bills)

if __name__ == "__main__":
    main()