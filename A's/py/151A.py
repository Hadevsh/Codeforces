def main() -> None:
    n, k, l, c, d, p, nl, np = map(int, input().split())
    drink_toasts: int = (k * l) // nl     # total toasts from drink
    lime_toasts: int = c * d              # total toasts from lime slices
    salt_toasts: int = p // np            # total toasts from salt

    total_toasts: int = min(drink_toasts, lime_toasts, salt_toasts)

    print(total_toasts // n)

if __name__ == "__main__":
    main()