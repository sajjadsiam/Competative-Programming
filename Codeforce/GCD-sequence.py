import sys
from math import gcd
input = sys.stdin.read

def is_non_decreasing(b):
    for i in range(len(b) - 1):
        if b[i] > b[i + 1]:
            return False
    return True

def gcd_sequence(a):
    b = []
    for i in range(len(a) - 1):
        b.append(gcd(a[i], a[i + 1]))
    return b

def can_remove_one_element(n, a):
    if n == 3:
      
        b1 = gcd_sequence(a[:2])
        b2 = gcd_sequence(a[1:])
        return is_non_decreasing(b1) or is_non_decreasing(b2)
    
    b = gcd_sequence(a)
    if is_non_decreasing(b):
        return True
    
   
    for i in range(n):
        if i == 0:
            new_b = gcd_sequence(a[1:])
        elif i == n - 1:
            new_b = gcd_sequence(a[:-1])
        else:
            new_b = gcd_sequence(a[:i] + a[i+1:])
        
        if is_non_decreasing(new_b):
            return True
    
    return False

def main():
    data = input().split()
    index = 0
    t = int(data[index])
    index += 1
    results = []
    
    for _ in range(t):
        n = int(data[index])
        index += 1
        a = list(map(int, data[index:index + n]))
        index += n
        if can_remove_one_element(n, a):
            results.append("YES")
        else:
            results.append("NO")
    
    print("\n".join(results))

if __name__ == "__main__":
    main()
