class Solution:
    def findOriginalArray(self, changed: List[int]) -> List[int]:

        if len(changed) % 2 != 0:
            return []

        mp = {}

        for num in changed:
            mp[num] = mp.get(num, 0) + 1

        ans = []

        for num in sorted(mp):

            if num == 0:
                if mp[0] % 2 != 0:
                    return []

                ans.extend([0] * (mp[0] // 2))
                continue

            if mp[num] > mp.get(num * 2, 0):
                return []

            for _ in range(mp[num]):
                ans.append(num)
                mp[num * 2] -= 1

        return ans