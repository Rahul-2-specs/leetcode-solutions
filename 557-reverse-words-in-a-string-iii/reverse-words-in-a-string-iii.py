class Solution(object):
    def reverseWords(self, s):
        return ' '.join(word[::-1]for word in s.split())
        