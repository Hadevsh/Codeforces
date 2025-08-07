def main() -> None:
    t: int = int(input())
    while t:
        a, b, c = map(int, input().split())
        if a + b == c or a + c == b or b + c == a:
            print("YES")
        else:
            print("NO")
        t -= 1

if __name__ == "__main__":
    main()