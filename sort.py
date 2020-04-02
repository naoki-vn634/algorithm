from functools import reduce
from algorithm_sort import *


def main(sort_algorithm):
    if "bubble" in sort_algorithm:
        interger = int(input())
        x = [x for x in list(str(interger))]
        x = bubblesort(x)
        result = int(reduce(lambda x,y : x+y , [x for x in x]))
        print(result)


    elif "randix" in sort_algorithm:
        print("How many Integers??")
        N = int(input())
        print("How many digits??")
        m = int(input())
        integer = [input() for x in range(N)]
        result = randix_sort(integer, m)
        print(result)



if __name__ == "__main__":
    print("algorithm: ")
    sort_algorithm = input()
    main(sort_algorithm)
    
