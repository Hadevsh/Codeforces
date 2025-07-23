def main() -> None:
    a = input().strip()
    b = input().strip()
    
    # Build answer by XOR-ing each pair of bits
    result = ''.join('1' if x != y else '0' for x, y in zip(a, b))
    print(result)

if __name__ == "__main__":
    main()