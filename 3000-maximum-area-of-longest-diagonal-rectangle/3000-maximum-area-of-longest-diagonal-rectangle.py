class Solution:
    def areaOfMaxDiagonal(self, dimensions: List[List[int]]) -> int:
        maxDiag=0
        area=0
        for l,b in dimensions:
            diag=l*l+b*b
            if diag>maxDiag or (diag==maxDiag and area<l*b):
                maxDiag=diag
                area=l*b
        return area


