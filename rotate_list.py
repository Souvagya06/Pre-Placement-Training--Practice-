l = [1, 2, 3, 4, 5, 6, 7]
k = 2
new_l = l[-k:] + l[k:len(l)-k] + l[:k]
print("Rotated List:", new_l)