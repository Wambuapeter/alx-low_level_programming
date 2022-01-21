from ctypes import *
op_file = "/home/peter/alx-low_level_programming/0x18-dynamic_libraries/100-operations.so"

my_functions = CDLL(op_file)

print(type(my_functions))
print(my_functions.square(10))

print("Done!")