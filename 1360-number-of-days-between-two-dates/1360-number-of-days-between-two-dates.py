class Solution:
    def daysBetweenDates(self, date1: str, date2: str) -> int:
        def total_days(date):
            year,month,day=map(int,date.split("-"))
            days=0
            for i in range(1,year):
                if i %400==0 or(i%4==0 and i%100!=0):
                    days+=366
                else:
                    days+=365
            month_days=[31,28,31,30,31,30,
                        31,31,30,31,30,31]
            for m in range(month-1):
                if year%400==0 or(year%4==0 and year%100!=0):
                    month_days[1]=29
                days+=month_days[m]
            
            days+=day
            return days
        return abs(total_days(date1)-total_days(date2))