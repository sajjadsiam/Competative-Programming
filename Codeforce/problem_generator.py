def min_problems_to_create(t, test_cases):
    results = []
    
    for case in test_cases:
        n, m = case[0], case[1]
        a = case[2]
        problem_count = {ch: 0 for ch in 'ABCDEFG'}
        
        for problem in a:
            problem_count[problem] += 1
        
        needed_problems = 0
        for ch in 'ABCDEFG':
            if problem_count[ch] < m:
                needed_problems += m - problem_count[ch]
        
        results.append(needed_problems)
    
    return results


t = int(input())
test_cases = []

for _ in range(t):
    n, m = map(int, input().split())
    a = input().strip()
    test_cases.append((n, m, a))


results = min_problems_to_create(t, test_cases)


for result in results:
    print(result)
