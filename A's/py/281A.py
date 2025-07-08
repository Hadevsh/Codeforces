def main() -> None:
    w: list[str] = list(str(input()))

    w[0] = w[0].upper()
    res: str = ""
    
    for c in w: res += c
    print(res)

if __name__ == "__main__":
    main()