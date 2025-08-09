def set_age(age):
    if age<0:
        raise ValueError ("Age cannot be negative")
    print ("Age ste to 1")

class MyError (Exception):
    pass
try:
    raise MyError ("Somethingwent wrong")
except MyError as e:
    print (e)

set_age(-15)