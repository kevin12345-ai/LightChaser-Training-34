my_list = [1,2,3,4,5,6,7,8,9,10]

def read_list():
    count = 0
    for i in my_list:
        if i % 2 == 0:
            count = count + 1
    print(count)


read_list()

