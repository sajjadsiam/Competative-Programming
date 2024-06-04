 def isPalindrome(self, s: str) -> bool:
         cleaned_str = ""

         for c in s:
              if c.isalnum():
                 cleaned_str += c.lower()
         return cleaned_str == cleaned_str[::-1]
