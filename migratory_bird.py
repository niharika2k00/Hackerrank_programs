

"""  LINKS :  OF HACKER RANK PROBLEM ------>
  https://www.hackerrank.com/challenges/migratory-birds/problem?h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen """


arr = [4, 4, 2, 3, 1, 5]
b = [0, 0, 0, 0, 0, 0]
for i in arr:
    b[i] += 1

print(b)
print(max(b))
print(b.index(max(b)))
