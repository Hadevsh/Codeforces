def main() -> None:
    n: int = int(input())
    faces: int = 0
    while n:
        s: str = str(input())
        s = s.lower()
        if s == "tetrahedron": faces += 4
        elif s == "cube": faces += 6
        elif s == "octahedron": faces += 8
        elif s == "dodecahedron": faces += 12
        elif s == "icosahedron": faces += 20
        n -= 1
    print(faces)

if __name__ == "__main__":
    main()