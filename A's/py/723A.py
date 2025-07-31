def main() -> None:
    x1, x2, x3 = map(int, input().split())

    # Sort the coordinates to find the median
    coordinates: list[int] = sorted([x1, x2, x3])
    median: int = coordinates[1]

    # Calculate the total distance
    total_distance: int = abs(x1 - median) + abs(x2 - median) + abs(x3 - median)

    print(total_distance)

if __name__ == "__main__":
    main()