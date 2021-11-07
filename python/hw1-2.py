

time,num=[(i) for i in input().split(' ')]

num=int(num)

def hours_in(num):
    return int(num/60/60)

def minutes_in(num):
    return int(num/60-(hours_in(num)*60))

def seconds_in(num):
    return int(num-(minutes_in(num)*60)-(hours_in(num)*60*60))

if(time=="hours"):
    print(hours_in(num))

if(time=="minutes"):
    print(minutes_in(num))

if(time=="seconds"):
    print(seconds_in(num))