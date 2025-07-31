def main() -> None:
    guest: str = str(input())
    host: str = str(input())
    pile: str = str(input())
    combined: str = guest + host

    if len(combined) != len(pile):
        print("NO")
    else:
        combined = sorted(combined)
        pile = sorted(pile)

        if combined == pile:
            print("YES")
        else:
            print("NO")

if __name__ == "__main__":
    main()