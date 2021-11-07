import time

hour,minute=[int(i) for i in input().split(':')]
local_time=time.localtime()
local_hour=int(time.strftime("%H",local_time))
local_minute=int(time.strftime("%M",local_time))

if minute<local_minute:
    minute+=60
    hour-=1
if hour<local_hour:
    hour+=24

print("距離目標時間還有",end=' ')
print(hour-local_hour,end=' ')
print("小時又",end=' ')
print(minute-local_minute,end=' ')
print("分鐘")
    

