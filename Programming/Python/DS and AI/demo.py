import matplotlib.pyplot as plt
import numpy as np

x=np.random.randn(10000)
y=np.random.randn(10000)
print(x)
print(y)
plt.hexbin(x,y,gridsize=30,cmap='bone',bins='log')

plt.colorbar(label='log10(N)')

plt.xlabel('X Axis')
plt.ylabel('Y Axis')
plt.title('Hexbin Plot with Logarithm Color Scale')
plt.show()
