def main() -> None:
    t: int = int(input())

    while t:
        n, s = map(int, input().split())

        values: list[int] = list(map(int, input().split())).sort()

        Lval: int = values[0]
        Rval: int = values[-1]

        # If s (starting pos) is already to the left (or right) of the whole interval we just need to walk it to the far end
        if s <= Lval:
            print(Rval - s)
        elif s >= Rval:
            print(s - Lval)
        else:
            # If s is in Lvalue, Rvalue, choose the cheaper "sweep" order
            goL: int = 2 * (s - Lval) + (Rval - s)
            goR: int = 2 * (Rval - s) + (s - Lval)
            print(min(goL, goR)) # Fastest "route"

        t -= 1

if __name__ == "__main__":
    main()