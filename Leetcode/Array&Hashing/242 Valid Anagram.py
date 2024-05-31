 def isAnagram(self, s: str, t: str) -> bool:
        t = sorted(t)
        s = sorted(s)
        if s == t:
            return True
        else:
            return False
