for i in range(1,10):
    for j in range(1,i+1):
        print(i*j, end="\t")#每次输出后不换行，而是用制表符分隔
    print()#输出换行
    