import pandas as pd

data = {'Emp ID': [1, 2, 3],
        'Name': ['ABC', 'DEF', 'XYZ'],
        'City': ['kolkata', 'Bhubaneshwar', 'Lucknow']}

df = pd.DataFrame(data)
print(df.to_string(index=False))

