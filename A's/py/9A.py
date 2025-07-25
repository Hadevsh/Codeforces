from math import gcd

def main() -> None:
    y, w = map(int, input().split())
    m: int = max(y, w)
    num: int = 7 - m # Number of winning faces
    tot: int = 6 # Number of total faces

    if num == 0: print("0/1") # If no chance
    else:
        g: int = gcd(num, tot) # Greatest common divisor
        num //= g; tot //= g
        print(f"{num}/{tot}")

if __name__ == "__main__":
    main()