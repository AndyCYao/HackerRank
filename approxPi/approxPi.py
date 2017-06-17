import sys 
from random import * 
from math import sqrt
def approxPi(times):
	'''Pi is the ratio of Circumference to diameter
		will approximate Pi using montecarlo method
		1. T times, assume we have a circle with area 2pi^2
		and square with area 2pi * 2
		ratio of area of circle to area of square
		should be pi / 4, that means of T times, a pi / 4 portion
		should be inside the area of circle.
	'''
	inside = 0
	total = times
	while(times > 0):
		y = random()
		x = random()
		# print("x is {}, y is {}, times {}".format(
		# x, y, time))
		if sqrt(x*x + y*y) <= 1:
			inside += 1
		times -= 1
	pi = 4* (inside / total)
	return pi

if __name__ == '__main__':		
	print(approxPi(int(sys.argv[1])))

