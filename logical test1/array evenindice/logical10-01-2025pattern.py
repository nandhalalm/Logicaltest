
n = int(input("Enter the number of rows: "))
asciia=65
for i in range(5):
    for k in range(n-i-1):
        print(" ",end='')
    for j in range(i+1):
         print(chr(asciia), end=' ')
    asciia+=1 
    print