n = int(input())

a=[]
for i in range(n):
    e=int(input())
    a.append(e)

o=False

for e in range(n):
    if a[e]==0:
        o=True
        
if o==True:
    print("є")
else:
    print("нема")
