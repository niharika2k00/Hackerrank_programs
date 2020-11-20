"""
d = {}
key = "lovers"
d[key]=list(map(int,input().split()))   # INTEGER
# d[key]=input().split()                # STRING
print(d) """

# BOTH ARE CORRECT ----->

if __name__ == '__main__':
    n = int(input())
    student_marks = {}
    for _ in range(n):
        # *line stores the rest values....i.e here 1 val is only assigned to name and the rest [1: ] assigned to line.
        name, *line = input().split()
        scores = list(map(float, line))
        student_marks[name] = scores
    query_name = input()

    output = list(student_marks[query_name])
    per = sum(output)/len(output);
    print("%.2f" % per);

# *******************************************************************

 n = int(input())
    d = {}
    for _ in range(n):
        line = input().split()
        name, scores = line[0], line[1:]
        scores = map(float, scores)
        d[name] = scores
    query_name = input()
  
    output = list(d[query_name])
    per = sum(output)/len(output);
    print("%.2f" % per);
  
 a = "this is a string"
 a = a.split(" ") # a is converted to a list of strings. 
 print (a)
 a = "-".join(a)
 print (a)
