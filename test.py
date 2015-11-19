import os
import ctypes as c

libUTILS = c.cdll.LoadLibrary('build/libUTILS.so')

prototype = c.CFUNCTYPE(
	c.c_float,
	c.c_float
)

add101 = prototype(('add101', libUTILS))

ans = add101(c.c_float(5.3))
print ans