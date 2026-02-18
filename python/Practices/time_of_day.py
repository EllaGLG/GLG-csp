#GLG period 7 time_of_day.py
hour1 = input("what time is it, in military time?") 

hour = int(hour1)

if hour >= 18 and hour <= 23 :
    print("Good Evening!")
elif hour >= 12 and hour <= 17:
    print("Good Afternoon!")
else:
    print("Good Nigth!")