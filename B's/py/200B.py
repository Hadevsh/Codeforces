def main() -> None:
    n: int = int(input())
    p: list[float] = list(map(float, input().split()))
    avg: float = sum(p) / n
    print(f"{avg:.12}")

if __name__ == "__main__":
    main()