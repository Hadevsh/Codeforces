def main() -> None:
    t: int = int(input())
    while t:
        x: int = int(input())
        y: int = 0
        found: bool = False
        while not found:
            for c in str(x):
                if c in str(y): 
                    print(y)
                    found = True
                    break
            y += 1
        t -= 1

if __name__ == "__main__":
    main()