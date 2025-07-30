def main() -> None:
    k: int = int(input())
    l: int = int(input())
    m: int = int(input())
    n: int = int(input())
    d: int = int(input())

    dmg: int = 0
    for i in range(d):
        if i % k == 0 or i % l == 0 or i % m == 0 or i % n == 0:
            dmg += 1
    
    print(dmg)

if __name__ == "__main__":
    main()