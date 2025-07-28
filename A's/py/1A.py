def main() -> None:
    n, m, a = map(float, input().split())
    print(round(n / a) + round(m / a))

if __name__ == "__main__":
    main()