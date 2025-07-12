def main() -> None:
    t: int = int(input())

    while t:
        l1, b1, l2, b2, l3, b3 = map(int, input().split())

        side_b: int = b1 + b2 + b3
        side_l: int = l1 + l2 + l3
        
        if l1 == l2 and l2 == l3 and side_b == l1:  # All three in a column
            print("YES")
        elif b1 == b2 and b2 == b3 and side_l == b1:  # All three in a row
            print("YES")
        elif l2 == l3 and l1 + l2 == b1 and b2 + b3 == b1:  # Big rectangle on the left, two small stacked on the right
            print("YES")
        elif l2 + l3 == l1 and b2 == b3 and b1 + b2 == l1:  # Big rectangle on the right, two small stacked on the left
            print("YES")
        else:
            print("NO")

        t -= 1

if __name__ == "__main__":
    main()