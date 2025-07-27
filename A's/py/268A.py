def main() -> None:
    n: int = int(input())
    teams: list[list[int, int]] = []
    for _ in range(n):
        h, a = map(int, input().split())
        teams.append((h, a))

    count: int = 0
    for i in range(n):
        for j in range(n):
            if i != j and teams[i][0] == teams[j][1]:
                count += 1

    print(count)

if __name__ == "__main__":
    main()