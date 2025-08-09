import matplotlib.pyplot as plt

# Sampe data
data = [12, 15, 13, 15, 14, 13, 13, 15, 23, 19, 18]

# Create histogram
plt.hist(data, color = 'green', edgecolor = 'black')

# Add labels and title
plt.xlabel('Value')
plt.ylabel('Frequency')
plt.title('Histogram of Data')

plt.grid("True")
plt.show()