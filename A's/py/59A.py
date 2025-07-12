def main() -> None:
    s: str = str(input())
    
    uppercase: str = "QWERTYUIOPASDFGHJKLZXCVBNM"
    
    u: int = 0
    l: int = 0

    for c in s:
        if c in uppercase: u += 1
        else: l += 1

    if u > l:  # More uppercase letters
        s = s.upper()
    else: s = s.lower()

    print(s)

if __name__ == "__main__":
    main()