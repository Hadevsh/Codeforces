def main() -> None:
    n: int = int(input())
    p = list(map(int, input().split()))

    # gave_to[i] will be the friend that i gave a gift to
    gave_to = [0] * (n + 1)
    for receiver, giver in enumerate(p, start=1):
        gave_to[giver] = receiver

    # output the mapping for friends 1 through n
    print(*gave_to[1:])

if __name__ == "__main__":
    main()