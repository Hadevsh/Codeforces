def get_round_numbers(n):
    round_numbers: list[int] = []
    position: int = 1  # Represents the current digit position (units, tens, hundreds, etc.)
    
    while n > 0:
        digit: int = n % 10
        if digit != 0:
            round_numbers.append(digit * position)
        n = n // 10
        position *= 10
    
    return round_numbers

def main() -> None:
    t: int = int(input())
    for _ in range(t):
        n : int = int(input())
        round_numbers: list[int] = get_round_numbers(n)
        print(len(round_numbers))
        print(' '.join(map(str, round_numbers)))

if __name__ == "__main__":
    main()