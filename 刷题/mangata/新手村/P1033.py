import numpy
def round_up(x):
    return round(x * 10000000) / 10000000.0
while True:
    try:
        x = numpy.arctan(1)
        r = int(input())
        s = round(r*r*4*x,7)
        print(s)
    except:
        break
