def max_score(t, test_cases):
    results = []
    for l, r in test_cases:
        max_score = 0
        x = 1
        while x <= r:
            x *= 2
        x //= 2
 
        while x >= l:
            if x >= l and x <= r:
                max_score = x.bit_length() - 1
                break
            x //= 2
 
        results.append(max_score)
    return results
 
 
t = int(input())
test_cases = []
for _ in range(t):
    l, r = map(int, input().split())
    test_cases.append((l, r))
 
results = max_score(t, test_cases)
 
 
for result in results:
    print(result)
