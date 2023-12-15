def main():
    testCase = int(input())
    for _ in range(testCase):
        c = map(int, input().split())
        a = list(map(int, input().split()))
        i = 0
        j = int(1e9)
        ans = 0
        while i <= j:
            ans = (i + j) // 2
            lc = 0
            for l in a:
                lc += (l + ans * 2) ** 2
                if lc == c:
                    break
                elif lc < c:
                    i = ans + 1
                else:
                    j = ans - 1
        print(ans)
if __name__ == "__main__":
    main()