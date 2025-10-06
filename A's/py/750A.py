def main() -> None:
    n, k = map(int, input().split())
    time_left = 240 - k
    solved = 0
    spent = 0

    for i in range(1, n + 1):
        need = 5 * i
        if spent + need > time_left:
            break
        spent += need
        solved += 1

    print(solved)

if __name__ == "__main__":
    main()