day,num=[(i) for i in input().split(' ')]
num=int(num)

def day_add(day,num):
    week=["Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"]
    for i in range (0,6):
        if day==week[i]:
            daynum=int(i)+1
    daynum=(daynum+num+7)%7-1
    return week[daynum]

print(day_add(day,num))

