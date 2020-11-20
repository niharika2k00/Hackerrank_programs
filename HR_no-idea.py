
# n, m = input(),  input() -- WRONG METHOD OF TAKING INPUT

m, n = input().split()

happiness = 0

# of n elements  --- strip() fn will omit/strip out the extra spaces
storage_arr = list(map(int, input().strip().split()))

A = set(map(int, input().strip().split()))     # of m elements
B = set(map(int, input().strip().split()))
for i in storage_arr:
    if i in A:
        happiness = happiness + 1
    if i in B:
        happiness = happiness - 1

print(happiness)
