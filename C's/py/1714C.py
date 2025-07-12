def main() -> None:
    t: int = int(input())

    while t:
        s: int = int(input())

        n: int = 9
        sum: int = 0
        nums: list[int] = []

        while n:
            if sum < s:
                if sum + n <= s:
                    sum += n
                    nums.insert(0, n)
            n -= 1

        print("".join(map(str, nums)))

        t -= 1

if __name__ == "__main__":
    main()