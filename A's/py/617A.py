import math

def main() -> None:
    x: float = float(input())
    res: int = math.ceil(x / 5)

    print(res)

if __name__ == "__main__":
    main()