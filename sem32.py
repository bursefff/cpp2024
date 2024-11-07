import subprocess
from math import sin
from matplotlib import pyplot as plt
import numpy as np

fig, ax = plt.subplots()
subprocess.run(["g++", "sem32.cpp", "-o", "sem32.out"])
x = np.arange(0, 50, 0.1)
y = np.vectorize(sin)(x)
y1 = np.zeros(x.size)
for i in range(x.size):
    cp = subprocess.run(["./sem32.out", "1000000", str(x[i])], capture_output=True, text=True)
    y1[i] = float(cp.stdout)

# ax.plot(x, y)
ax.plot(x, y1)
plt.show()
