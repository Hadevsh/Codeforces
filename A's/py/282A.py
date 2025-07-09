def main() -> None:
    t: int = int(input())
    res: int = 0

    while t:  # > 0
        w: str = str(input())

        if w[0] == "-" or w[len(w) - 1] == "-": res -= 1
        else: res += 1

        t -= 1
    
    print(res)

if __name__ == "__main__":
    main()