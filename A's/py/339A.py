def main() -> None:
    w: str = str(input())
    
    nums: list[chr] = []

    for c in w:
        if c != "+":
            nums.append(c)

    nums.sort()

    print("+".join(map(str, nums)))

if __name__ == "__main__":
    main()