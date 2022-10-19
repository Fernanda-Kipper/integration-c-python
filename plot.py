from ctypes import *
import ctypes
import matplotlib.pyplot as plt 

# Getting C library
so_file = "/Users/fernandakipper/Desktop/projects/clp/shared-lib.so"
shared_lib = CDLL(so_file)

calculateFn = shared_lib.calculate
calculateFn.restype = ctypes.POINTER(ctypes.c_int)

# Getting initial number with user
print('Digite o número que deseja aplicar a Conjectura de Collatz')
initial_value = int(input())

# Generating values
result = shared_lib.calculate(initial_value)

# y axis values 
y = [result[i] for i in range(1, result[0] + 1)]

# x axis values, based on result size
x = range(0, len(y))

# plotting the points  
plt.plot(x, y) 
    
# naming the x axis 
plt.xlabel('quantidade de vezes que foi operado') 
# naming the y axis 
plt.ylabel('valor alcançado') 
# giving a title to my graph 
plt.title('Conjectura de Collatz') 
# function to show the plot 
plt.show() 
