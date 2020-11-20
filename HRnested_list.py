""" list1 = []
list2 = []
n=int(input('Enter the size of list : '))


for i in range(n):                        # for number of list2 in the list1
    for j in range(0,2):                  # range(2) for size of list2
        list2.append(input())
    list1.append(list2)
    list2=[]  #set temp_list to null

print(list1) """

# marksheet and scorelist declartion
marksheet = []
scorelist = []

if __name__ == '__main__':

    for _ in range(int(input())):
        name = input()
        score = float(input())
        marksheet += [[name, score]]
        scorelist += [score]

    # extration of second most greated marks
    score_sec = sorted(list(set(scorelist)))[1]

    for n, s in sorted(marksheet):
        if s == score_sec:
            print(n)


""" 
# COMPLEX ----- BUT CORRECT

n = int(input())
c = []
d = []
for i in range(n):
    a = []
    for j in range(2):
        if j == 0:
            a.append(input())
        else:
            x = float(input())
            a.append(x)
            d.append(x)
    c.append(a)
c.sort()
d.sort()
d = list(dict.fromkeys(d))
for i in range(0, n):
    if d[1] == c[i][1]:
        print(c[i][0]) """
