def favorite_cube_removed(test_cases):
    results = []
    for case in test_cases:
        n, f, k, a = case
        favorite_value = a[f - 1]
        sorted_a = sorted(a, reverse=True)
        
        count_fav_value = a.count(favorite_value)
        sorted_fav_positions = [i for i, val in enumerate(sorted_a) if val == favorite_value]
        
        if len(sorted_fav_positions) == 0:
            results.append("NO")
            continue
        
        first_pos = sorted_fav_positions[0]
        last_pos = sorted_fav_positions[-1]
        
        if first_pos < k:
            if last_pos < k:
                results.append("YES")
            else:
                results.append("MAYBE")
        else:
            results.append("NO")
    
    return results


t = int(input().strip())
test_cases = []
for _ in range(t):
    n, f, k = map(int, input().strip().split())
    a = list(map(int, input().strip().split()))
    test_cases.append((n, f, k, a))


results = favorite_cube_removed(test_cases)
for result in results:
    print(result)
