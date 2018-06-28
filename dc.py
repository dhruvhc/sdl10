w="ww ww ww afd"
a=w.split()
count=1
for i in range(0,len(a)):
    for j in range(0,len(a)):
        if a[i]==a[j]:
            count+=1
        else:
            count=1
print(count)
            
